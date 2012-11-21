#include<iostream>
#include"duck.h"
#include"mallardduck.h"
#include"modelduck.h"
using namespace std;

int main()
{
	Duck* mallard=new MallardDuck;
	mallard->Display();
	mallard->PerformQuack();
	mallard->PerformFly();
	mallard->Swim();
	cout<<endl;

	Duck* model_duck=new ModelDuck;
	model_duck->Display();
	model_duck->PerformQuack();
	model_duck->PerformFly();
	model_duck->Swim();

	model_duck->set_flybehavior(new FlyRocketPowered);
	
	model_duck->PerformFly();

	return 0;
}
