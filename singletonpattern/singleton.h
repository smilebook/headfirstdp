#ifndef SINGLETON_PATTERN_SINGLETON_H
#define SINGLETON_PATTERN_SINGLETON_H

#include<iostream>

class Singleton
{
public:
	static Singleton* GetInstance()
	{
		if(NULL == unique_instance_)
		{
			unique_instance_ = new Singleton;
		}
		else
		{
			std::cout<<"Instance exists,Only one instance permitted"<<std::endl;
		}
		return unique_instance_;
	}
private:
	Singleton() { std::cout<<"First instance"<<std::endl; }
    static Singleton* unique_instance_;
};
Singleton* Singleton::unique_instance_ = NULL;
#endif
