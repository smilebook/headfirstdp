#ifndef COMMAND_PATTERN_DEVICES_H
#define COMMAND_PATTERN_DEVICES_H

#include<string>

class Light
{
public:
	explicit Light(const std::string& describe):describe_(describe) { }
	std::string describe() { return describe_; }
	void On();
	void Off();
private:
	std::string describe_;
};

class CeilingFan
{
public:
	explicit CeilingFan(const std::string& describe):describe_(describe) { }
	std::string describe() { return describe_; }
	std::string speed() { return speed_; }
	void Medium();
	void High();
	void Low();
	void Off();
private:
	std::string describe_;
	std::string speed_;
};

class Stereo
{
public:
	explicit Stereo(const std::string& describe):describe_(describe) { }
	void On();
	void Off();
	void SetCd();
	void SetDvd();
	void SetRadio();
	void set_volume(int v);
private:
	std::string describe_;
	std::string device_;
	int volume_;
};
#endif
