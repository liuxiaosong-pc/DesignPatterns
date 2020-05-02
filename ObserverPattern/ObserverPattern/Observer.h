/*************************************************
Author:liuxiaosong@163.com
Data:2020/5/2
Version:0.1
Content:Observer.h
************************************************/
#ifndef DESIGNPATTERN_OBSERVER_H
#define DESIGNPATTERN_OBSERVER_H

class Observer{
public:
	virtual void Update(float price) = 0; // Pure virtual interface
};
#endif  //DESIGNPATTERN_OBSERVER_H