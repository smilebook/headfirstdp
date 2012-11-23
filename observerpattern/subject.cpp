#include"subject.h"
#include<iostream>
#include<algorithm>
#include"observer.h"

using namespace std;

void WeatherData::RegisterObserver(Observer* ob)
{
	observers_.push_back(ob);
}
void WeatherData::RemoveObserver(Observer* ob)
{
	vector<Observer*>::iterator ob_loc=find(observers_.begin(),observers_.end(),ob);
	if(ob_loc!=observers_.end())
		observers_.erase(ob_loc);
}
void WeatherData::NotifyObservers()
{
	for(vector<Observer*>::iterator it=observers_.begin();it!=observers_.end();++it)
		(*it)->Update(temperature_,humidity_,pressure_);
}
void WeatherData::SetMeasurements(double temp,double humi,double pres)
{
	temperature_=temp;
	humidity_=humi;
	pressure_=pres;
	MeasurementsChanged();
}



