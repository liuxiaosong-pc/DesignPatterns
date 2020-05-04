/*************************************************
Author£ºliuxiaosong
Email£º18789445338@163.com
Data:2020/5/2
Version:0.1
Content:main.cpp
************************C************************/
#include "main.h"
void main()
{
	
	IElectricalEquipment * light = new Light();
	IElectricalEquipment * air = new Air();
	IElectricalEquipment * fan = new Fan();

	ISwitch  *pullChain = new pullSwitch(light);
	ISwitch  *pullChain1 = new pullSwitch(air);
	//ISwitch  *twoPosition = new TwoPositionSwitch(air);
	ISwitch  *threePositionSwitch = new ThreePositionSwitch(light);

	pullChain->On();
	pullChain->Off();

	threePositionSwitch->On();
	threePositionSwitch->Off();

	pullChain1->On();
	pullChain1->Off();

	SAFE_DELETE(pullChain1);
	SAFE_DELETE(pullChain);
	SAFE_DELETE(air);
	SAFE_DELETE(light);
}