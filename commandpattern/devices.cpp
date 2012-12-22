#include"devices.h"
#include<iostream>

using namespace std;

void Light::On()
{
	cout<<describe_<<" light is on"<<endl;
}

void Light::Off()
{
	cout<<describe_<<" light is off"<<endl;
}

void CeilingFan::Medium()
{
	speed_ = kMedium;
	cout<<describe_<<" ceiling fan is on medium"<<endl;
}

void CeilingFan::High()
{
	speed_ = kHigh;
	cout<<describe_<<" ceiling fan is on high"<<endl;
}

void CeilingFan::Low()
{
	speed_ = kLow;
	cout<<describe_<<" ceiling fan is on low"<<endl;
}

void CeilingFan::Off()
{
	speed_ = kOff;
	cout<<describe_<<" ceiling fan is off"<<endl;
}

void Stereo::On()
{
	cout<<describe_<<" stereo is on"<<endl;
}

void Stereo::Off()
{
	cout<<describe_<<" stereo is off"<<endl;
}

void Stereo::SetCd()
{
	device_ = "CD";
	cout<<describe_<<" stereo is set for CD input"<<endl;
}
void Stereo::SetDvd()
{
	device_ = "DVD";
	cout<<describe_<<" stereo is set for DVD input"<<endl;
}
void Stereo::SetRadio()
{
	device_ = "Radio";
	cout<<describe_<<" stereo is set for Radio input"<<endl;
}

void Stereo::set_volume(int volume)
{
	volume_ = volume;
	cout<<describe_<<" Stereo volume set to "<<volume_<<endl;
}
