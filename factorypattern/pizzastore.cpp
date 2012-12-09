#include"pizzastore.h"
#include<iostream>
#include"pizza.h"
#include"ingredient.h"

using namespace std;

Pizza* PizzaStore::OrderPizza(const string& type)
{
	Pizza *pizza=CreatePizza(type);

	pizza->Prepare();
	pizza->Bake();
	pizza->Cut();
	pizza->Box();

	return pizza;
}

Pizza* NewYorkPizzaStore::CreatePizza(const string& type)
{
	Pizza* pizza=NULL;
	PizzaIngredientFactory *ingredient_factory=new NewYorkPizzaIngredientFactory;
	if ("cheese"==type)
	{
		pizza=new CheesePizza(ingredient_factory);
		pizza->set_name("New York Style Cheese Pizza");
	}
	else if ("veggie"==type)
	{
		pizza=new VeggiePizza(ingredient_factory);
		pizza->set_name("New York Style Veggie Pizza");
	}
	else if ("clam"==type)
	{
		pizza=new ClamPizza(ingredient_factory);
		pizza->set_name("New York Style Clam Pizza");
	}
	else if ("pepperoni"==type)
	{
		pizza=new PepperoniPizza(ingredient_factory);
		pizza->set_name("New York Style Pepperoni Pizza");
	}
	return pizza;
}

Pizza* ChicagoPizzaStore::CreatePizza(const string& type)
{
	Pizza* pizza=NULL;
	PizzaIngredientFactory *ingredient_factory=new ChicagoPizzaIngredientFactory;
	if ("cheese"==type)
	{
		pizza=new CheesePizza(ingredient_factory);
		pizza->set_name("Chicago Style Cheese Pizza");
	}
	else if ("veggie"==type)
	{
		pizza=new VeggiePizza(ingredient_factory);
		pizza->set_name("Chicago Style Veggie Pizza");
	}
	else if ("clam"==type)
	{
		pizza=new ClamPizza(ingredient_factory);
		pizza->set_name("Chicago Style Clam Pizza");
	}
	else if ("pepperoni"==type)
	{
		pizza=new PepperoniPizza(ingredient_factory);
		pizza->set_name("Chicago Style Pepperoni Pizza");
	}
	return pizza;
}
