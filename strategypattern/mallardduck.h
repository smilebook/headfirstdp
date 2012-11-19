#ifndef STRATEGY_PATTERN_MALLARDDUCK_H
#define STRATEGY_PATTERN_MALLARDDUCK_H
#include"duck.h"

class FlyBehavior;
class QuackBehavior;
class FlyWithWings;
class Quack;

class MallardDuck:public Duck
{
public:
	MallardDuck()
	{
		flybehavior_=new FlyWithWings;
		quackbehavior_=new Rquack;
	}
	void Display();
};

#endif

