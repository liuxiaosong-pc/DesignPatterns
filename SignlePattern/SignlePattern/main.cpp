/*************************************************
Author:liuxiaosong
Email£º18789445338@163.com
Data:2020/5/3
Version:0.1
Content:main.h
************************************************/
#ifndef DESIGNPATTERN_SINGLETONMAIN_H
#define DESIGNPATTERN_SINGLETONMAIN_H

#include "Singleton.h"

void main()
{
	Singleton::GetInstance().DoSomething();
}

#endif //DESIGNPATTERN_SINGLETONMAIN_H