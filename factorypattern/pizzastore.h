#ifndef FACTORY_PATTERN_PIZZA_STORE_H
#define FACTORY_PATTERN_PIZZA_STORE_H

#include<string>
class Pizza;
class PizzaStore
{
public:
	Pizza* OrderPizza(const std::string& type);
	virtual Pizza* CreatePizza(const std::string& type)=0;
};

class NewYorkPizzaStore:public PizzaStore
{
public:
	Pizza* CreatePizza(const std::string& type);
};

class ChicagoPizzaStore:public PizzaStore
{
public:
	Pizza* CreatePizza(const std::string& type);
};
#endif
