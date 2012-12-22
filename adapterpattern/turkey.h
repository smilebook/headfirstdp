#ifndef ADAPTER_PATTERN_TURKEY_H
#define ADAPTER_PATTERN_TURKEY_H

#include<iostream>

class Turkey
{
public:
	virtual void Gobble() = 0;
	virtual void Fly() = 0;
};

class WildTurkey:public Turkey
{
public:
	void Gobble() { std::cout<<"Gobble gobble"<<std::endl; } 
	void Fly() { std::cout<<"I'm flying in a short distance"<<std::endl; }
};

#endif
