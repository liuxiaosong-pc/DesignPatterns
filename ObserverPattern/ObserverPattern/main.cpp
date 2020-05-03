/*************************************************
Author:liuxiaosong
Email��18789445338@163.com
Data:2020/5/2
Version:0.1
Content:main.cpp
************************************************/

#include "main.h"

void main()
{
	// ��������
	ConcreteSubjcet * pSubject = new ConcreteSubjcet();

	// �����۲���
	Observer * pObserver1 = new Concretebserver("Jack Ma");
	Observer * pObserver2 = new Concretebserver("Pony");

	// ע��۲���
	pSubject->Attach(pObserver1);
	pSubject->Attach(pObserver2);

	// ���ļ۸񣬲�֪ͨ�۲���
	pSubject->SignalPrice(12.5);

	// ע��һ���۲���
	//pSubject->Detach(pObserver1);

	// �ٴθ���״̬����֪ͨ�۲���
	pSubject->SignalPrice(15.0);

	SAFE_DELETE(pObserver1);
	SAFE_DELETE(pObserver2);
	SAFE_DELETE(pSubject);
}