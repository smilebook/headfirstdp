#ifndef ADAPTER_PATTERN_ADAPTER_H
#define ADAPTER_PATTERN_ADAPTER_H

#include<iostream>
#include"duck.h"
#include"turkey.h"

class TurkeyAdapter:public Duck
{
public:
	TurkeyAdapter(Turkey *turkey): turkey_(turkey) { }
	void Quack() { turkey_->Gobble(); }
	void Fly() 
	{
		for(int i=0;i<5;++i)
			turkey_->Fly();
	}
private:
	Turkey *turkey_;
};

class WildTurkeyClassAdapter:public Duck,public WildTurkey
{
public:
	void Gobble() { std::cout<<"Gobble gobble"<<std::endl; }
	void Quack() { Gobble(); }
	void Fly()
	{ 
		for(int i=0;i<5;++i)
			WildTurkey::Fly();
	}
};

#endif
