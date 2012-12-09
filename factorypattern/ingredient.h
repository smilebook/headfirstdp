#ifndef FACTORY_PATTERN_INGREDIENT_H
#define FACTORY_PATTERN_INGREDIENT_H

#include<string>

class Dough
{
public:
	Dough() {}
	explicit Dough(const std::string& na): name_(na) { }
	std::string  name() { return name_; };
protected:
	std::string name_;
};

class Sauce
{
public:
	Sauce() {}
	explicit Sauce(const std::string& na): name_(na) { }
	std::string name() { return name_; }
protected:
	std::string name_;
};

class Cheese
{
public:
	Cheese() {}
	explicit Cheese(const std::string& na): name_(na) { }
	std::string name() { return name_; };
protected:
	std::string name_;
};

class Veggies
{
public:
	Veggies() {}
	explicit Veggies(const std::string& na): name_(na) { }
	std::string name() { return name_; };
protected:
	std::string name_;
};

class Pepperoni
{
public:
	Pepperoni() {}
	explicit Pepperoni(const std::string& na): name_(na) { }
	std::string name() { return name_; };
protected:
	std::string name_;
};

class Clams
{
public:
	Clams() {}
	explicit Clams(const std::string& na): name_(na) { }
	std::string name() { return name_; };
protected:
	std::string name_;
};

class ThinCrustDough:public Dough
{
public:
	ThinCrustDough(): Dough("Thin Crust Dough") { }
};

class ThickCrustDough:public Dough
{
public:
	ThickCrustDough(): Dough("Thick Crust Dough") { }
};

class MarinaraSauce:public Sauce
{
public:
	MarinaraSauce(): Sauce("Marinara Sauce") { }
};

class PlumTomatoSauce:public Sauce
{
public:
	PlumTomatoSauce(): Sauce("Plum Tomato Sauce") { }
};

class ReggianoCheese:public Cheese
{
public:
	ReggianoCheese(): Cheese("Reggiano Cheese") { }
};

class MozzarellaCheese:public Cheese
{
public:
	MozzarellaCheese(): Cheese("Mozzarella Cheese") { }
};

class Garlic:public Veggies
{
public:
	Garlic(): Veggies("Garlic") { }
};

class Onion:public Veggies
{
public:
	Onion(): Veggies("Onion") { }
};

class Mushroom:public Veggies
{
public:
	Mushroom(): Veggies("Mushroom") { }
};

class RedPepper:public Veggies
{
public:
	RedPepper(): Veggies("Red Pepper") { }
};

class BlackOlives:public Veggies
{
public:
	BlackOlives(): Veggies("Black Olives") { }
};

class Spinach:public Veggies
{
public:
	Spinach(): Veggies("Spinach") { }
};

class Eggplant:public Veggies
{
public:
	Eggplant(): Veggies("Eggplant") { }
};

class SlicedPepperoni:public Pepperoni
{
public:
	SlicedPepperoni(): Pepperoni("Sliced Pepperoni") { }
};

class FreshClams:public Clams
{
public:
	FreshClams(): Clams("Fresh Clams") { }
};

class FrozenClams:public Clams
{
public:
	FrozenClams(): Clams("Frozen Clams") { }
};

class PizzaIngredientFactory
{
public:
	virtual Dough* CreateDough()=0;
	virtual Sauce* CreateSauce()=0;
	virtual Cheese* CreateCheese()=0;
	virtual std::vector<Veggies*> CreateVeggies()=0;
	virtual Pepperoni* CreatePepperoni()=0;
	virtual Clams* CreateClam()=0;
};

class NewYorkPizzaIngredientFactory: public PizzaIngredientFactory
{
public:
	Dough* CreateDough()
	{
		return new ThinCrustDough;
	}
	Sauce* CreateSauce()
	{
		return new MarinaraSauce;
	}
	Cheese* CreateCheese()
	{
		return new ReggianoCheese();
	}
	std::vector<Veggies*> CreateVeggies()
	{
		std::vector<Veggies*> veggies;
		veggies.push_back(new Garlic);
		veggies.push_back(new Onion);
		veggies.push_back(new Mushroom);
		veggies.push_back(new RedPepper);
		
		return veggies;
	}
	Pepperoni* CreatePepperoni()
	{
		return new SlicedPepperoni;
	}
	Clams* CreateClam()
	{
		return new FreshClams;
	}
};
class ChicagoPizzaIngredientFactory: public PizzaIngredientFactory
{
public:
	Dough* CreateDough()
	{
		return new ThickCrustDough;
	}
	Sauce* CreateSauce()
	{
		return new PlumTomatoSauce;
	}
	Cheese* CreateCheese()
	{
		return new MozzarellaCheese();
	}
	std::vector<Veggies*> CreateVeggies()
	{
		std::vector<Veggies*> veggies;
		veggies.push_back(new BlackOlives);
		veggies.push_back(new Spinach);
		veggies.push_back(new Eggplant);
		return veggies;
	}
	Pepperoni* CreatePepperoni()
	{
		return new SlicedPepperoni;
	}
	Clams* CreateClam()
	{
		return new FreshClams;
	}
};
#endif
