/*************************************************
Author:liuxiaosong
Email：18789445338@163.com
Data:2020/5/2
Version:0.1
Content:main.cpp
************************************************/

#include "main.h"

void main()
{
	// 创建主题
	ConcreteSubjcet * pSubject = new ConcreteSubjcet();

	// 创建观察者
	Observer * pObserver1 = new Concretebserver("Jack Ma");
	Observer * pObserver2 = new Concretebserver("Pony");

	// 注册观察者
	pSubject->Attach(pObserver1);
	pSubject->Attach(pObserver2);

	// 更改价格，并通知观察者
	pSubject->SignalPrice(12.5);

	// 注销一个观察者
	//pSubject->Detach(pObserver1);

	// 再次更改状态，并通知观察者
	pSubject->SignalPrice(15.0);

	SAFE_DELETE(pObserver1);
	SAFE_DELETE(pObserver2);
	SAFE_DELETE(pSubject);
}