#ifndef STRATEGY_PATTERN_FLYBEHAVIOR_H
#define STRATEGY_PATTERN_FLYBEHAVIOR_H

class FlyBehavior
{
public:
	virtual void Fly()=0;
};
class FlyWithWings:public FlyBehavior
{
public:
	void Fly();
};

#endif
