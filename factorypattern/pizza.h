#ifndef FACTORY_PATTERN_PIZZA_H
#define FACTORY_PATTERN_PIZZA_H

#include<string>
#include<vector>

class Dough;
class Sauce;
class Veggies;
class Cheese;
class Pepperoni;
class Clams;

class PizzaIngredientFactory;

class Pizza
{
public:
	Pizza() { };
	explicit Pizza(const std::string& na): name_(na),dough_(NULL),sauce_(NULL),cheese_(NULL),pepperoni_(NULL),clam_(NULL) {}
	virtual void Prepare()=0;
	void Bake();
	void Cut();
	void Box();
	void set_name(const std::string& na) { name_ = na; }
	std::string name() { return name_; }
	virtual ~Pizza();
protected:
	std::string name_;
	Dough *dough_;
	Sauce *sauce_;
	std::vector<Veggies*> veggies_;
	Cheese *cheese_;
	Pepperoni *pepperoni_;
	Clams *clam_;
};

class CheesePizza:public Pizza
{
public:
	explicit CheesePizza(PizzaIngredientFactory *pif);
	void Prepare();
	~CheesePizza();
private:
	PizzaIngredientFactory *ingredient_factory_;
};
class VeggiePizza:public Pizza
{
public:
	explicit VeggiePizza(PizzaIngredientFactory *pif);
	void Prepare();
	~VeggiePizza();
private:
	PizzaIngredientFactory *ingredient_factory_;
};

class ClamPizza:public Pizza
{
public:
	explicit ClamPizza(PizzaIngredientFactory *pif);
	void Prepare();
	~ClamPizza();
private:
	PizzaIngredientFactory *ingredient_factory_;
};
class PepperoniPizza:public Pizza
{
public:
	explicit PepperoniPizza(PizzaIngredientFactory *pif);
	void Prepare();
	~PepperoniPizza();
private:
	PizzaIngredientFactory *ingredient_factory_;
};
#endif
