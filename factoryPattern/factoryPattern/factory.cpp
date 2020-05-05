/*************************************************
Author£ºliuxiaosong
Email£º18789445338@163.com
Data:2020/5/5
Version:0.1
Content:factory.cpp
************************************************/
#ifndef _FACTORY_H_
#define _FACTORY_H_
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class PenCore;

// abstractFactory
// The purpose of pure virtual functions is to implement interface inheritance
class BallPen {
public:
	BallPen(){};
	virtual ~BallPen(){}
	virtual PenCore* getPenCore() = 0;
};

// ConcreteFactory
//The subclass implements the pure virtual function interface of the parent class
class RedBallPen : public BallPen {
public:
	PenCore* getPenCore();
};


class BlueBallPen : public BallPen {
public:
	PenCore* getPenCore();
};

class BlackBallPen : public BallPen {
public:
	PenCore* getPenCore();
};



#endif