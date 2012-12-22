#ifndef ADAPTER_PATTERN_DUCK_H
#define ADAPTER_PATTERN_DUCK_H

#include<iostream>

class Duck
{
public:
	virtual void Quack() = 0;
	virtual void Fly() = 0;
};

class MallardDuck:public Duck
{
public:
	void Quack() { std::cout<<"Quack"<<std::endl; }
	void Fly() { std::cout<<"I'm flying"<<std::endl; }
};

#endif
