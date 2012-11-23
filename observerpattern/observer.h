#ifndef OBSERVER_PATTERN_OBSERVER_H
#define OBSERVER_PATTERN_OBSERVER_H

class Subject;
class Observer
{
public:
	virtual void Update(double temp,double humi,double pres)=0;
};
class DisplayElement
{
public:
	virtual void Display()=0;
};

class CurrentConditionDisplay:public Observer,public DisplayElement
{
public:
	CurrentConditionDisplay(Subject* wea_data);
	void Display();
	void Update(double temp,double humi,double pres)
	{
		temperature_=temp;
		humidity_=humi;
		Display();
	}
private:
	double temperature_;
	double humidity_;
	Subject* weather_data_;
};
#endif
