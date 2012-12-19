#include"command.h"
#include<iostream>
#include"devices.h"

using namespace std;

void LightOnCommand::Execute()
{
	light_->On();
}

void LightOffCommand::Execute()
{
	light_->Off();
}

void CeilingFanOnCommand::Execute()
{
	ceiling_fan_->High();
}

void CeilingFanLowCommand::Execute()
{
	ceiling_fan_->Low();
}

void CeilingFanHighCommand::Execute()
{
	ceiling_fan_->High();
}

void CeilingFanMediumCommand::Execute()
{
	ceiling_fan_->Medium();
}
void CeilingFanOffCommand::Execute()
{
	ceiling_fan_->Off();
}
void StereoOnWithCDCommand::Execute()
{
	stereo_->On();
	stereo_->SetCd();
	stereo_->set_volume(11);
}
void StereoOffCommand::Execute()
{
	stereo_->Off();
}
