#include<iostream>
#include"pizza.h"
#include"ingredient.h"
#include"pizzastore.h"

using namespace std;

int main()
{
	PizzaStore* new_york_pizza_store = new NewYorkPizzaStore;
	
	Pizza* new_york_style_cheese_pizza = new_york_pizza_store->OrderPizza("cheese");
	Pizza* new_york_style_veggie_pizza = new_york_pizza_store->OrderPizza("veggie");
	Pizza* new_york_style_clam_pizza = new_york_pizza_store->OrderPizza("clam");
	Pizza* new_york_style_pepperoni_pizza = new_york_pizza_store->OrderPizza("pepperoni");
	
	PizzaStore* chicago_pizza_store = new ChicagoPizzaStore;
	Pizza* chicago_style_cheese_pizza = chicago_pizza_store->OrderPizza("cheese");
	Pizza* chicago_style_veggie_pizza = chicago_pizza_store->OrderPizza("veggie");
	Pizza* chicago_style_clam_pizza = chicago_pizza_store->OrderPizza("clam");
	Pizza* chicago_style_pepperoni_pizza = chicago_pizza_store->OrderPizza("pepperoni");
	
	delete new_york_pizza_store;
	
	delete new_york_style_cheese_pizza;
	delete new_york_style_veggie_pizza;
	delete new_york_style_clam_pizza;
	delete new_york_style_pepperoni_pizza;

	delete chicago_pizza_store;
	
	delete chicago_style_cheese_pizza;
	delete chicago_style_veggie_pizza;
	delete chicago_style_clam_pizza;
	delete chicago_style_pepperoni_pizza;

	return 0;
}
