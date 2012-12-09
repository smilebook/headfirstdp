#include<iostream>

#include"beverage.h"
#include"decorator.h"

using namespace std;

int main()
{
	Beverage *house_blend=new HouseBlend;
	house_blend=new Milk(house_blend);
	house_blend=new Milk(house_blend);
	house_blend=new Mocha(house_blend);
	house_blend=new Soy(house_blend);
	house_blend=new Whip(house_blend);

	Beverage *dark_roast=new DarkRoast;
	dark_roast=new Milk(dark_roast);
	dark_roast=new Milk(dark_roast);
	dark_roast=new Mocha(dark_roast);
	dark_roast=new Soy(dark_roast);
	dark_roast=new Whip(dark_roast);

	Beverage *decaf=new Decaf;
	decaf=new Milk(decaf);
	decaf=new Milk(decaf);
	decaf=new Mocha(decaf);
	decaf=new Soy(decaf);
	decaf=new Whip(decaf);

	Beverage *espresso=new Espresso;
	espresso=new Milk(espresso);
	espresso=new Milk(espresso);
	espresso=new Mocha(espresso);
	espresso=new Soy(espresso);
	espresso=new Whip(espresso);

	cout<<house_blend->description()<<" $"<<house_blend->Cost()<<endl;
	cout<<dark_roast->description()<<" $"<<dark_roast->Cost()<<endl;
	cout<<decaf->description()<<" $"<<decaf->Cost()<<endl;
	cout<<espresso->description()<<" $"<<espresso->Cost()<<endl;

	delete house_blend;
	delete dark_roast;
	delete decaf;
	delete espresso;

	return 0;
}
