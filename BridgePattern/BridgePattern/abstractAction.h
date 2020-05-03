/*************************************************
Author：liuxiaosong
Email：18789445338@163.com
Data:2020/5/2
Version:0.1
Content:abstractAction.h
************************************************/
#ifndef DESIGNPATTERN_ABSTRACTION_H
#define DESIGNPATTERN_ABSTRACTION_H

//  类之间的关系为组合
#include "Implementor.h"
class ISwitch {
public:
	ISwitch(IElectricalEquipment *ee){ m_pEe = ee; }
	virtual ~ISwitch(){}
	virtual void On() = 0;  // 打开电器
	virtual void Off() = 0;  // 关闭电器

protected:
	IElectricalEquipment * m_pEe;
};

#endif //DESIGNPATTERN_ABSTRACTION_H

