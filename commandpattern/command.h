#ifndef COMMAND_PATTERN_COMMAND_H
#define COMMAND_PATTERN_COMMAND_H

class Light;
class CeilingFan;
class Stereo;

class Command
{
public:
	virtual void Execute()=0;
};

class LightOnCommand:public Command
{
public:
	explicit LightOnCommand(Light *lg): light_(lg) { }
	void Execute();
private:
	Light* light_;
};
class LightOffCommand:public Command
{
public:
	explicit LightOffCommand(Light *lg): light_(lg) { }
	void Execute();
private:
	Light* light_;
};
class CeilingFanOnCommand:public Command
{
public:
	explicit CeilingFanOnCommand(CeilingFan *cf): ceiling_fan_(cf) { }
	void Execute();
private:
	CeilingFan* ceiling_fan_;
};
class CeilingFanOffCommand:public Command
{
public:
	explicit CeilingFanOffCommand(CeilingFan *cf): ceiling_fan_(cf) { }
	void Execute();
private:
	CeilingFan* ceiling_fan_;
};
class CeilingFanHighCommand:public Command
{
public:
	explicit CeilingFanHighCommand(CeilingFan *cf): ceiling_fan_(cf) { }
	void Execute();
private:
	CeilingFan* ceiling_fan_;
};
class CeilingFanMediumCommand:public Command
{
public:
	explicit CeilingFanMediumCommand(CeilingFan *cf): ceiling_fan_(cf) { }
	void Execute();
private:
	CeilingFan* ceiling_fan_;
};
class CeilingFanLowCommand:public Command
{
public:
	explicit CeilingFanLowCommand(CeilingFan *cf): ceiling_fan_(cf) { }
	void Execute();
private:
	CeilingFan* ceiling_fan_;
};

class StereoOnWithCDCommand:public Command
{
public:
	explicit StereoOnWithCDCommand(Stereo *s): stereo_(s) { }
	void Execute();
private:
	Stereo *stereo_;
};

class StereoOffCommand:public Command
{
public:
	explicit StereoOffCommand(Stereo *s): stereo_(s) { }
	void Execute();
private:
	Stereo *stereo_;
};
class NoCommand:public Command
{
public:
	void Execute() { };
};

#endif
