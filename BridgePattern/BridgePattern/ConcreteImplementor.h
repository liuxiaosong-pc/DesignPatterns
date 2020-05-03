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
		std::cout << "Light poweron" << std::endl;
	}
	virtual void PowerOff() override{
		std::cout << "Light poweroff" << std::endl;
	}
};

class Air : public IElectricalEquipment
{
public:
	virtual void PowerOn() override {
		std::cout << "Air poweron" << std::endl;
	}
	virtual void PowerOff() override{
		std::cout << "Air poweroff" << std::endl;
	}
};

#endif //DESIGNPATTERN_CONCRETEIMPLEMENTOR_H