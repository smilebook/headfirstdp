#include<iostream>
#include"singleton.h"

using namespace std;

int main()
{
	Singleton *single = Singleton::GetInstance();
	Singleton *another = Singleton::GetInstance();
	if(single == another)
		cout<<"The same instance"<<endl;
	return 0;
}
