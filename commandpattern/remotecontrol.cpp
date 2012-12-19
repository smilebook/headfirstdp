#include"remotecontrol.h"
#include<iostream>
#include"command.h"

RemoteControl::RemoteControl()
{
	no_command_ = new NoCommand;
	for(int i=0;i<7;++i)
	{
		on_commands_.push_back(no_command_);
		off_commands_.push_back(no_command_);
	}
}
RemoteControl::~RemoteControl()
{
	delete no_command_;
}
void RemoteControl::SetCommand(int slot,Command* on_command,Command* off_command)
{
	on_commands_[slot]=on_command;
	off_commands_[slot]=off_command;
}
void RemoteControl::OnButtonWasPushed(int slot)
{
	on_commands_[slot]->Execute();
}
void RemoteControl::OffButtonWasPushed(int slot)
{
	off_commands_[slot]->Execute();
}
