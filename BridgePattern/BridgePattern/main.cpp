#include "main.h"

void main()
{
	// ������������ơ�����ȣ�
	IElectricalEquipment * light = new Light();
	IElectricalEquipment * air = new Air();

	// �������أ�����ʽ���ء���λ���أ�
	// ������ʽ���غ͵�ƹ�����������λ���غͿյ���������
	ISwitch  *pullChain = new pullSwitch(light);
	ISwitch  *twoPosition = new TwoPositionSwitch(air);
	
	// ���ơ��ص�
	pullChain->On();
	pullChain->Off();

	// �򿪷��ȡ��رշ���
	twoPosition->On();
	twoPosition->Off();

	SAFE_DELETE(twoPosition);
	SAFE_DELETE(pullChain);
	SAFE_DELETE(air);
	SAFE_DELETE(light);
}