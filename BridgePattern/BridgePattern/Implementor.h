/*************************************************
Author:liuxiaosong
Email£º18789445338@163.com
Data:2020/5/2
Version:0.1
Content:implementor.h
************************************************/
#ifndef DESIGNPATTERN_IMPLEMENTOR_H
#define DESIGNPATTERN_IMPLEMENTOR_H

class IElectricalEquipment
{
public:
	virtual ~IElectricalEquipment(){}
	virtual void PowerOn() = 0;     // open
	virtual void PowerOff() = 0;    // close
};

#endif //DESIGNPATTERN_IMPLEMENTOR_H