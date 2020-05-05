/*************************************************
Author£ºliuxiaosong
Email£º18789445338@163.com
Data:2020/5/5
Version:0.1
Content:product.cpp
************************C************************/
#include "Factory.h"
PenCore* RedBallPen::getPenCore()
{
	PenCore *pen = new RedPenCore();
	return pen;
}

PenCore* BlueBallPen::getPenCore()
{
	PenCore *pen = new BluePenCore();
	return pen;
}

PenCore* BlackBallPen::getPenCore()
{
	PenCore *pen = new BlackPenCore();
	return pen;
}