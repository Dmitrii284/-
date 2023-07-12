
#ifndef _Header_H
#define _Header_H

#include<iostream>
//#include"ServiceMacro.h"
#include<string>


class Base
{

private:
	//GENERATE_ACCASSOR_FIELD(std::string, name_, Name);
	std::string name_;
public:
	Base() = default;
	Base(const std::string& name) :name_(name) { }
	virtual ~Base() = default;
	void setName(const std::string& value)
	{
		name_ = value;
	}
	virtual std::string getName()const
	{
		return name_;
	}

};

class Item : public Base
{

private:
	double weight_;

public:
	Item() = default;
	Item(const std::string& name, double weight) :Base(name), weight_(weight) { }
	void setWeidht(const double& value)
	{
		weight_ = value;
	}
	double getWeidht()const
	{
		return weight_;
	}


};


class Creature : public Base
{
private:
	double& speed_;

public:
	Creature() = default;
	Creature(const std::string& name, double speed) :Base(name), speed_(speed) { }
	void setSpeed(const double& value)
	{
		speed_ = value;
	}
	double getSpeed()const
	{
		return speed_;
	}

};

class Robot : public Item, public Creature
{
public:
	/*std::string getName() const override
	{
		return Creature::getName();
	}*/
	Robot() = default;
	Robot(const std::string& name, double weight, double& speed) : Base(name), Creature(speed)
	{
		setWeidht(weight);
		setSpeed(speed);
	}

};



#endif // !_Header_H

