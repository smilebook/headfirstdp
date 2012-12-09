#ifndef DECORATOR_PATTERN_DECORATOR_H
#define DECORATOR_PATTERN_DECORATOR_H

#include<string>
#include"beverage.h"

//class Beverage; 	// should be this,but Milk's constructor use Beverage's 
					// constructor.I can fix it by putting the definition into CPP files,
					// but I want leave the comments there.

class CondimentDecorator:public Beverage
{
public:
	virtual std::string description() = 0;
	virtual double Cost() = 0;
};

class Milk:public CondimentDecorator
{
public:
	Milk(Beverage* bever): beverage(bever) {/* set_description(bever->description()+" ,Milk");*/ } 
	// Why not set? In my opinion,Milk is a kind of condiment,we can't take it as 
	//Coffee.In this case,you can set_description,but you can't set Cost because 
	//there is no member store the value. Sure you can add a member,but you are 
	//using inheritance now.
	//All above is my immature opinion, I'm still exploring the way of coding.
	Milk() {}
	std::string description();
	double Cost();
private:
	Beverage *beverage;
};

class Mocha:public CondimentDecorator
{
public:
	Mocha(Beverage *bever): beverage(bever) { }
	Mocha() {}
	std::string description();
	double Cost();
private:
	Beverage *beverage;
};

class Soy:public CondimentDecorator
{
public:
	Soy(Beverage *bever): beverage(bever) { }
	Soy() { };
	std::string description();
	double Cost();
private:
	Beverage *beverage;
};

class Whip:public CondimentDecorator
{
public:
	Whip(Beverage *bever): beverage(bever) { }
	Whip() {}
	std::string description();
	double Cost();
private:
	Beverage *beverage;
};


#endif
