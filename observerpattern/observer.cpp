#include"observer.h"
#include<iostream>
#include"subject.h"

using namespace std;

CurrentConditionDisplay::CurrentConditionDisplay(Subject* wea_data)
{
	weather_data_=wea_data;
	weather_data_->RegisterObserver(this);
}
void CurrentConditionDisplay::Display()
{
	cout<<"Current conditions:"<<temperature_<<"F degrees and "<<humidity_<<"% humidity"<<endl;
}
