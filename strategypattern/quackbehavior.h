#ifndef STRATEGY_PATTERN_QUACKBEHAVIOR_H
#define STRATEGY_PATTERN_QUACKBEHAVIOR_H

class QuackBehavior
{
public:
	virtual void Quack()=0;
};
class Rquack:public QuackBehavior
{
public:
	void Quack();
};

#endif
