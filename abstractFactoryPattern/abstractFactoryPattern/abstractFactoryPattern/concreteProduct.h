/*************************************************
Author:liuxiaosong@163.com
Data:2020/4/19
Version:0.1
Content��concreteProduct.h
************************************************/

#ifndef DESIGNPATTERN_CONCRETE_PRODUCT_H
#define DESIGNPATTERN_CONCRETE_PRODUCT_H

#include "abstractProduct.h"

class concreatProductA1 :public abstractProductTypeA{ // A���Ʒ�ľ����Ʒ����A1
public:
	string name(){
		return "concreateProductA1";
	}
};

class concreatProductA2 :public abstractProductTypeA{ // A���Ʒ�ľ����Ʒ����A2
public:
	string name(){
		return "concreateProductA2";
	}
};

class concreatProductB1 :public abstractProductTypeB{ // B���Ʒ�ľ����Ʒ����B1
public:
	string name(){
		return "concreateProductB1";
	}
};

class concreatProductB2 :public abstractProductTypeB{ // B���Ʒ�ľ����Ʒ����B2
public:
	string name(){
		return "concreateProductB2";
	}
};

#endif //DESIGNPATTERN_CONCRETE_PRODUCT_H