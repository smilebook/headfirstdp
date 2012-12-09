#include"pizza.h"
#include<iostream>
#include"ingredient.h"


using namespace std;

void Pizza::Bake()
{
	cout<<"Bake for 25 minutes at 350"<<endl;
}

void Pizza::Cut()
{
	cout<<"Cutting the pizza into diagonal slices"<<endl;
}

void Pizza::Box()
{
	cout<<"Place pizza in official PizzaStore box"<<endl;
}

CheesePizza::CheesePizza(PizzaIngredientFactory *pif): ingredient_factory_(pif) { }

Pizza::~Pizza()
{
	delete dough_;
	delete sauce_;
	for(int i=0;i<veggies_.size();++i)
		delete veggies_[i];
	delete cheese_;
	delete pepperoni_;
	delete clam_; 
}

void CheesePizza::Prepare()
{
	dough_ = ingredient_factory_->CreateDough();
	sauce_ = ingredient_factory_->CreateSauce();
	cheese_ = ingredient_factory_->CreateCheese();
	cout<<"Preparing "<<name_<<" with "<<dough_->name();
	cout<<", "<<sauce_->name()<<", "<<cheese_->name()<<endl;
}

CheesePizza::~CheesePizza()
{
	delete ingredient_factory_;
}

VeggiePizza::VeggiePizza(PizzaIngredientFactory *pif): ingredient_factory_(pif) { }

void VeggiePizza::Prepare()
{
	dough_ = ingredient_factory_->CreateDough();
	sauce_ = ingredient_factory_->CreateSauce();
	cheese_ = ingredient_factory_->CreateCheese();
	veggies_ = ingredient_factory_->CreateVeggies();
	cout<<"Preparing "<<name_<<" with "<<dough_->name();
	cout<<", "<<sauce_->name()<<", "<<cheese_->name();
	for(int i=0;i<veggies_.size();++i)
		cout<<", "<<veggies_[i]->name();
	cout<<endl;
}

VeggiePizza::~VeggiePizza()
{
	delete ingredient_factory_;
}

ClamPizza::ClamPizza(PizzaIngredientFactory *pif): ingredient_factory_(pif) { }

void ClamPizza::Prepare()
{
	dough_ = ingredient_factory_->CreateDough();
	sauce_ = ingredient_factory_->CreateSauce();
	cheese_ = ingredient_factory_->CreateCheese();
	clam_ = ingredient_factory_->CreateClam();
	cout<<"Preparing "<<name_<<" with "<<dough_->name();
	cout<<", "<<sauce_->name()<<", "<<cheese_->name()<<", "<<clam_->name()<<endl;
}

ClamPizza::~ClamPizza()
{
	delete ingredient_factory_;
}

PepperoniPizza::PepperoniPizza(PizzaIngredientFactory *pif): ingredient_factory_(pif) { }

void PepperoniPizza::Prepare()
{
	dough_ = ingredient_factory_->CreateDough();
	sauce_ = ingredient_factory_->CreateSauce();
	cheese_ = ingredient_factory_->CreateCheese();
	pepperoni_ = ingredient_factory_->CreatePepperoni();
	cout<<"Preparing "<<name_<<" with "<<dough_->name();
	cout<<", "<<sauce_->name()<<", "<<cheese_->name()<<", "<<pepperoni_->name()<<endl;
}

PepperoniPizza::~PepperoniPizza()
{
	delete ingredient_factory_;
}

