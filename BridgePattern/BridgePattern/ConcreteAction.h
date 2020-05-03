/*************************************************
Author£ºliuxiaosong
Email£º18789445338@163.com
Data:2020/5/2
Version:0.1
Content:ConcreteAction.h
************************C************************/
#ifndef DESIGNPATTERN_CONCRETEACTION_H
#define DESIGNPATTERN_CONCRETEACTION_H
#include<iostream>
#include "abstractAction.h"

class pullSwitch :public ISwitch{
public:
	pullSwitch(IElectricalEquipment *ee) : ISwitch(ee) {}

	virtual void On() override {
		std::cout << "Switch on the equipment with a pull chain switch." << std::endl;
		m_pEe->PowerOn();
	}

	virtual void Off() override {
		std::cout << "Switch off the equipment with a pull chain switch." << std::endl;
		m_pEe->PowerOff();
	}
};

class TwoPositionSwitch : public ISwitch {
public:
	TwoPositionSwitch(IElectricalEquipment *ee) : ISwitch(ee) {}

	virtual void On() override {
		std::cout << "Switch on the equipment with a two-position switch." << std::endl;
		m_pEe->PowerOn();
	}

	virtual void Off() override {
		std::cout << "Switch off the equipment with a two-position switch." << std::endl;
		m_pEe->PowerOff();
	}
};


#endif //DESIGNPATTERN_CONCRETEACTION_H

