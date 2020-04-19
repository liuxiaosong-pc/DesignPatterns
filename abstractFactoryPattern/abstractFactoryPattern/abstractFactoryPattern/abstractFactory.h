/*************************************************
Author:liuxiaosong@163.com
Data:2020/4/19
Version:0.1
Content:abstractFactory.h
************************************************/

#ifndef DESIGNPATTERN_ABSTRACT_FACTORY_H
#define DESIGNPATTERN_ABSTRACT_FACTORY_H

#include "abstractProduct.h"

class abstractFactory{    //���󹤳�
public:
	enum FactoryType{
		ProductType_A,
		ProductType_B
	};

	virtual abstractProductTypeA*  CreaterProductA() = 0;  //��������ProductA
	virtual abstractProductTypeB*  CreaterProductB() = 0;  //��������ProductB
	static abstractFactory* createFactory(FactoryType factory);
};

#endif //DESIGNPATTERN_ABSTRACT_FACTORY_H