#include<iostream>
#include"devices.h"
#include"command.h"
#include"remotecontrol.h"

using namespace std;

int main()
{
	Light living_room_light("Living Room");
	CeilingFan living_room_ceiling_fan("Living Room");
	Stereo living_room_stereo("Living Room");
	
	LightOnCommand living_room_light_on(&living_room_light);
	LightOffCommand living_room_light_off(&living_room_light);

	CeilingFanOnCommand living_room_ceiling_fan_on(&living_room_ceiling_fan);
	CeilingFanLowCommand living_room_ceiling_fan_low(&living_room_ceiling_fan);
	CeilingFanMediumCommand living_room_ceiling_fan_medium(&living_room_ceiling_fan);
	CeilingFanOffCommand living_room_ceiling_fan_off(&living_room_ceiling_fan);
	
	StereoOnWithCDCommand living_room_stereo_on_with_cd(&living_room_stereo);
	StereoOffCommand living_room_stereo_off(&living_room_stereo);
	RemoteControl remote_control;

	remote_control.SetCommand(0,&living_room_light_on,&living_room_light_off);
	remote_control.SetCommand(1,&living_room_ceiling_fan_on,&living_room_ceiling_fan_off);
	remote_control.SetCommand(2,&living_room_ceiling_fan_low,&living_room_ceiling_fan_off);
	remote_control.SetCommand(3,&living_room_ceiling_fan_medium,&living_room_ceiling_fan_off);
	remote_control.SetCommand(4,&living_room_stereo_on_with_cd,&living_room_stereo_off);

	remote_control.OnButtonWasPushed(0);
	remote_control.OffButtonWasPushed(0);
	remote_control.OnButtonWasPushed(1);
	remote_control.OffButtonWasPushed(1);
	remote_control.OnButtonWasPushed(2);
	remote_control.OnButtonWasPushed(3);
	remote_control.OffButtonWasPushed(3);
	remote_control.OnButtonWasPushed(4);
	remote_control.OffButtonWasPushed(4);

	return 0;
}
