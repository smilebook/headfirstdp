#include<iostream>
#include"subject.h"
#include"observer.h"

using namespace std;

int main()
{
	WeatherData weather_data;
	CurrentConditionDisplay current_display(&weather_data);
	weather_data.SetMeasurements(80,65,30.4);
	weather_data.SetMeasurements(82,70,29.2);
	weather_data.SetMeasurements(78,90,29.2);
	return 0;
}
