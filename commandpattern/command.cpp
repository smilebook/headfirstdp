#include"command.h"
#include<iostream>

using namespace std;

void LightOnCommand::Execute()
{
	light_->On();
}
void LightOnCommand::Undo()
{
	light_->Off();
}
void LightOffCommand::Execute()
{
	light_->Off();
}
void LightOffCommand::Undo()
{
	light_->On();
}

void CeilingFanOnCommand::Execute()
{
	pre_speed_=ceiling_fan_->speed();
	ceiling_fan_->High();
}

void CeilingFanOnCommand::Undo()
{
	switch(pre_speed_)
	{
	case CeilingFan::kOff: ceiling_fan_->Off();break;
	case CeilingFan::kHigh: ceiling_fan_->High();break;
	case CeilingFan::kMedium: ceiling_fan_->Medium();break;
	case CeilingFan::kLow: ceiling_fan_->Low();break;
	default:cout<<"errror speed!"<<endl;
	}
}

void CeilingFanLowCommand::Execute()
{
	pre_speed_=ceiling_fan_->speed();
	ceiling_fan_->Low();
}

void CeilingFanLowCommand::Undo()
{
	switch(pre_speed_)
	{
	case CeilingFan::kOff: ceiling_fan_->Off();break;
	case CeilingFan::kHigh: ceiling_fan_->High();break;
	case CeilingFan::kMedium: ceiling_fan_->Medium();break;
	case CeilingFan::kLow: ceiling_fan_->Low();break;
	default:cout<<"errror speed!"<<endl;
	}
}

void CeilingFanHighCommand::Execute()
{
	pre_speed_=ceiling_fan_->speed();
	ceiling_fan_->High();
}

void CeilingFanHighCommand::Undo()
{
	switch(pre_speed_)
	{
	case CeilingFan::kOff: ceiling_fan_->Off();break;
	case CeilingFan::kHigh: ceiling_fan_->High();break;
	case CeilingFan::kMedium: ceiling_fan_->Medium();break;
	case CeilingFan::kLow: ceiling_fan_->Low();break;
	default:cout<<"errror speed!"<<endl;
	}
}

void CeilingFanMediumCommand::Execute()
{
	pre_speed_=ceiling_fan_->speed();
	ceiling_fan_->Medium();
}

void CeilingFanMediumCommand::Undo()
{
	switch(pre_speed_)
	{
	case CeilingFan::kOff: ceiling_fan_->Off();break;
	case CeilingFan::kHigh: ceiling_fan_->High();break;
	case CeilingFan::kMedium: ceiling_fan_->Medium();break;
	case CeilingFan::kLow: ceiling_fan_->Low();break;
	default:cout<<"errror speed!"<<endl;
	}
}
void CeilingFanOffCommand::Execute()
{
	pre_speed_=ceiling_fan_->speed();
	ceiling_fan_->Off();
}

void CeilingFanOffCommand::Undo()
{
	switch(pre_speed_)
	{
	case CeilingFan::kOff: ceiling_fan_->Off();break;
	case CeilingFan::kHigh: ceiling_fan_->High();break;
	case CeilingFan::kMedium: ceiling_fan_->Medium();break;
	case CeilingFan::kLow: ceiling_fan_->Low();break;
	default:cout<<"errror speed!"<<endl;
	}
}

void StereoOnWithCDCommand::Execute()
{
	stereo_->On();
	stereo_->SetCd();
	stereo_->set_volume(11);
}
void StereoOnWithCDCommand::Undo()
{
	stereo_->Off();
}
void StereoOffCommand::Execute()
{
	stereo_->Off();
}
void StereoOffCommand::Undo()
{
	stereo_->On();
}
void MacroCommand::Execute()
{
	for(int i=0;i<commands_.size();++i)
		commands_[i]->Execute();
}
void MacroCommand::Undo()
{
	for(int i=0;i<commands_.size();++i)
		commands_[i]->Undo();
}
