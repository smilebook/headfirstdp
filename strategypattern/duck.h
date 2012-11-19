#ifndef STRATEGY_PATTERN_DUCK_H
#define STRATEGY_PATTERN_DUCK_H

#include"flybehavior.h"
#include"quackbehavior.h"

class Duck
{
public:
	void set_flybehavior(FlyBehavior* fb) { flybehavior_=fb; }
	void set_quackbehavior(QuackBehavior* qb) { quackbehavior_=qb; }
	void PerformFly() { flybehavior_->Fly(); }
	void PerformQuack() { quackbehavior_->Quack(); }
	void Swim();
	virtual	void Display()=0;
protected:
	FlyBehavior* flybehavior_;
	QuackBehavior* quackbehavior_;
};
#endif
