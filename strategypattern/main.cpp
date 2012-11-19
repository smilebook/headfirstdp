#include<iostream>
#include"duck.h"
#include"mallardduck.h"

using namespace std;

int main()
{
	Duck* mallard=new MallardDuck;
	mallard->Display();
	mallard->PerformQuack();
	mallard->PerformFly();
	mallard->Swim();
	return 0;
}
