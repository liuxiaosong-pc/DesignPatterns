#include "main.h"

void main()
{
	// 创建电器（电灯、电风扇）
	IElectricalEquipment * light = new Light();
	IElectricalEquipment * air = new Air();

	// 创建开关（拉链式开关、两位开关）
	// 将拉链式开关和电灯关联起来，两位开关和空调关联起来
	ISwitch  *pullChain = new pullSwitch(light);
	ISwitch  *twoPosition = new TwoPositionSwitch(air);
	
	// 开灯、关灯
	pullChain->On();
	pullChain->Off();

	// 打开风扇、关闭风扇
	twoPosition->On();
	twoPosition->Off();

	SAFE_DELETE(twoPosition);
	SAFE_DELETE(pullChain);
	SAFE_DELETE(air);
	SAFE_DELETE(light);
}