#ifndef COMMAND_PATTERN_REMOTE_CONTROL_H
#define COMMAND_PATTERN_REMOTE_CONTROL_H

#include<vector>


class Command;
class NoCommand;
class RemoteControl
{
public:
	RemoteControl();
	~RemoteControl();
	void SetCommand(int slot,Command* on_command,Command* off_command);
	void OnButtonWasPushed(int slot);
	void OffButtonWasPushed(int slot); 
	void UndoButtonWasPushed();
private:
	std::vector<Command*> on_commands_;
	std::vector<Command*> off_commands_;
	Command *undo_command_;
	NoCommand* no_command_;
};

#endif
