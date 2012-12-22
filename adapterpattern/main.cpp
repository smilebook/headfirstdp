#include<iostream>
#include"duck.h"
#include"turkey.h"
#include"adapter.h"

using namespace std;

void TestDuck(Duck* duck)
{
	duck->Quack();
	duck->Fly();
}

int main()
{
	MallardDuck duck;
	WildTurkey turkey;
	Duck *turkey_adapter=new TurkeyAdapter(&turkey);
	Duck *wild_turkey_class_adapter=new WildTurkeyClassAdapter();

	cout<<"The Turkey says..."<<endl;
	turkey.Gobble();
	turkey.Fly();

	cout<<"\nThe Duck says..."<<endl;
	TestDuck(&duck);

	cout<<"\nThe TurkeyAdapter says..."<<endl;
	TestDuck(turkey_adapter);
	
	cout<<"\nThe WildTurkeyClassAdapter says..."<<endl;
	TestDuck(wild_turkey_class_adapter);

	delete turkey_adapter;
	delete wild_turkey_class_adapter;

	return 0;

}
