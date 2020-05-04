/*************************************************
Author:liuxiaosong
Email£º18789445338@163.com
Data:2020/5/2
Version:0.1
Content:ConcreteImplementor.h
************************************************/
#ifndef DESIGNPATTERN_CONCRETEIMPLEMENTOR_H
#define DESIGNPATTERN_CONCRETEIMPLEMENTOR_H

#include <iostream>
#include "Implementor.h"

class Light: public IElectricalEquipment
{
public:
	virtual void PowerOn() override {
		std::cout << "Light power on" << std::endl;
	}
	virtual void PowerOff() override{
		std::cout << "Light power off" << std::endl;
	}
};

class Air : public IElectricalEquipment
{
public:
	virtual void PowerOn() override {
		std::cout << "Air power on" << std::endl;
	}
	virtual void PowerOff() override{
		std::cout << "Air power off" << std::endl;
	}
};

class Fan: public IElectricalEquipment
{
public:
	virtual void PowerOn() override {
		std::cout << "Fan power on" << std::endl;
	}
	virtual void PowerOff() override{
		std::cout << "Fan power off" << std::endl;
	}
};

#endif //DESIGNPATTERN_CONCRETEIMPLEMENTOR_H