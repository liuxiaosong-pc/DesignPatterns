/***************************************************
Author:liuxiaosong@163.com
Data:2020/4/19
Version:0.1
Content:abstractFactory.h
************************************************/

#include "abstractFactory.h"
#include "concreteFactory.h"

abstractFactory* abstractFactory::createFactory(FactoryType factory){
	abstractFactory* factoryPoint = NULL;
	switch (factory){
	case FactoryType::ProductType_A:{
		factoryPoint = new concretFactoryA();
		break;
	}

	case  FactoryType::ProductType_B:{
	    factoryPoint = new concretFactoryB();
		break;
	}

	default:
		break;
	}
	return factoryPoint;
}
