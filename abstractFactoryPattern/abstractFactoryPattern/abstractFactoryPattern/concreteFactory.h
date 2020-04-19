/*************************************************
Author:liuxiaosong@163.com
Data:2020/4/19
Version:0.1
Content:concreteFactory.h
************************************************/
#ifndef DESIGNPATTERN_CONCRETE_FACTORY_H
#define DESIGNPATTERN_CONCRETE_FACTORY_H

#include "abstractFactory.h"
#include "concreteProduct.h"

class concretFactoryA : public abstractFactory{
public:
	abstractProductTypeA* CreaterProductA(){
		return new concreatProductA1();
	};

	abstractProductTypeB* CreaterProductB() {
		return new concreatProductB1();
	};
};

class concretFactoryB : public abstractFactory{
public:
	abstractProductTypeA* CreaterProductA(){
		return new concreatProductA1();
	};

	abstractProductTypeB* CreaterProductB(){
		return new concreatProductB2();
	};
};

#endif //DESIGNPATTERN_CONCRETE_FACTORY_H