/*************************************************
Author:liuxiaosong@163.com
Data:2020/4/19
Version:0.1
Content:abstractProduct.h
************************************************/

#ifndef DESIGNPATTERN_ABSTRACTPRODUCT_H
#define DESIGNPATTERN_ABSTRACTPRODUCT_H

#include <string>
using std::string;

class abstractProductTypeA { // �����Ʒ����A
public:
	virtual string name() = 0;
};

class abstractProductTypeB{ // �����Ʒ����B
public:
	virtual string name() = 0;
};

#endif //DESIGNPATTERN_ABSTRACTPRODUCT_H