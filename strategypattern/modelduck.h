#ifndef STRATEGY_PATTERN_MODELDUCK_H
#define STRATEGY_PATTERN_MODELDUCK_H

#include"duck.h"

class ModelDuck:public Duck
{
public:
	ModelDuck()
	{
		flybehavior_=new FlyNoWay;
		quackbehavior_=new Rquack;
	}
	void Display();
};
#endif
