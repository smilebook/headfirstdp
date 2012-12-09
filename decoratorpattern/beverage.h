#ifndef DECORATOR_PATTERN_BEVERAGE_H
#define DECORATOR_PATTERN_BEVERAGE_H

#include<string>


class Beverage
{
public:
	explicit Beverage(const std::string& descri):description_(descri) {}
	Beverage():description_("Unkown Coffee") {}
	virtual std::string description() { return description_; } //should be virtual, cause decorators have Beverage's object.if not virtual,it may call this func rather than decorators's description function.
	void set_description(const std::string& descri) { description_ = descri; }
	virtual double Cost() = 0;
private:
	std::string description_;
};

class HouseBlend:public Beverage
{
public:
	explicit HouseBlend(const std::string& descri): Beverage(descri) {}
	HouseBlend(): Beverage("House Blend Coffee") { }
	double Cost() { return 0.89; }
};
class DarkRoast:public Beverage
{
public:
	explicit DarkRoast(const std::string& descri): Beverage(descri) {}
	DarkRoast(): Beverage("Dark Roast Coffee") { }
	double Cost() { return 0.99; }
};
class Espresso:public Beverage
{
public:
	explicit Espresso(const std::string& descri): Beverage(descri) {}
	Espresso(): Beverage("Espresso") { }
	double Cost() { return 1.99; }
};
class Decaf:public Beverage
{
public:
	explicit Decaf(const std::string& descri): Beverage(descri) { }
	Decaf(): Beverage("Decaf Coffee") { }
	double Cost() { return 1.05; }
};

#endif
