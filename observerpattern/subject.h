#ifndef OBSERVER_PATTERN_SUBJECT_H
#define OBSERVER_PATTERN_SUBJECT_H

#include<vector>

class Observer;
class Subject
{
public:
	virtual	void RegisterObserver(Observer* ob)=0;
	virtual void RemoveObserver(Observer* ob)=0;
	virtual	void NotifyObservers()=0;
};

class WeatherData:public Subject
{
public:
	void RegisterObserver(Observer* ob);
	void RemoveObserver(Observer* ob);
	void NotifyObservers();
	void MeasurementsChanged() { NotifyObservers(); }
	void SetMeasurements(double temp,double hum,double pres);

	double temperature() { return temperature_; }
	double humidity() { return humidity_; }
	double pressure() { return pressure_; }

private:
	double temperature_;
	double humidity_;
	double pressure_;
	std::vector<Observer*> observers_;
};
#endif
