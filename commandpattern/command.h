#ifndef COMMAND_PATTERN_COMMAND_H
#define COMMAND_PATTERN_COMMAND_H

#include"devices.h"
#include<vector>

class Command
{
public:
	virtual void Execute()=0;
	virtual void Undo()=0;
};

class LightOnCommand:public Command
{
public:
	explicit LightOnCommand(Light *lg): light_(lg) { }
	void Execute();
	void Undo();
private:
	Light* light_;
};
class LightOffCommand:public Command
{
public:
	explicit LightOffCommand(Light *lg): light_(lg) { }
	void Execute();
	void Undo();
private:
	Light* light_;
};
class CeilingFanOnCommand:public Command
{
public:
	explicit CeilingFanOnCommand(CeilingFan *cf): ceiling_fan_(cf) { }
	void Execute();
	void Undo();
private:
	CeilingFan* ceiling_fan_;
	CeilingFan::SpeedValue pre_speed_;
};
class CeilingFanOffCommand:public Command
{
public:
	explicit CeilingFanOffCommand(CeilingFan *cf): ceiling_fan_(cf) { }
	void Execute();
	void Undo();
private:
	CeilingFan* ceiling_fan_;
	CeilingFan::SpeedValue pre_speed_;
};
class CeilingFanHighCommand:public Command
{
public:
	explicit CeilingFanHighCommand(CeilingFan *cf): ceiling_fan_(cf) { }
	void Execute();
	void Undo();
private:
	CeilingFan* ceiling_fan_;
	CeilingFan::SpeedValue pre_speed_;
};
class CeilingFanMediumCommand:public Command
{
public:
	explicit CeilingFanMediumCommand(CeilingFan *cf): ceiling_fan_(cf) { }
	void Execute();
	void Undo();
private:
	CeilingFan* ceiling_fan_;
	CeilingFan::SpeedValue pre_speed_;
};
class CeilingFanLowCommand:public Command
{
public:
	explicit CeilingFanLowCommand(CeilingFan *cf): ceiling_fan_(cf) { }
	void Execute();
	void Undo();
private:
	CeilingFan* ceiling_fan_;
	CeilingFan::SpeedValue pre_speed_;
};

class StereoOnWithCDCommand:public Command
{
public:
	explicit StereoOnWithCDCommand(Stereo *s): stereo_(s) { }
	void Execute();
	void Undo();
private:
	Stereo *stereo_;
};

class StereoOffCommand:public Command
{
public:
	explicit StereoOffCommand(Stereo *s): stereo_(s) { }
	void Execute();
	void Undo();
private:
	Stereo *stereo_;
};
class MacroCommand:public Command
{
public:
	explicit MacroCommand(const std::vector<Command*>& commands): commands_(commands) { }
	void Execute();
	void Undo();
private:
	std::vector<Command*> commands_;
};
class NoCommand:public Command
{
public:
	void Execute() { };
	void Undo() { };
};
#endif
