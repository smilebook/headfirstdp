#include"decorator.h"
#include<string>
#include"beverage.h"

using namespace std;

string Milk::description()
{
	return beverage->description()+", Milk";
}

double Milk::Cost()
{
	return beverage->Cost()+0.10;
}

string Mocha::description()
{
	return beverage->description()+", Mocha";
}

double Mocha::Cost()
{
	return beverage->Cost()+0.20;
}

string Soy::description()
{
	return beverage->description()+", Soy";
}

double Soy::Cost()
{
	return beverage->Cost()+0.15;
}
string Whip::description()
{
	return beverage->description()+", Whip";
}

double Whip::Cost()
{
	return beverage->Cost()+0.10;
}
