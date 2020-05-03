/*************************************************
Author:liuxiaosong
Email：18789445338@163.com
Data:2020/5/2
Version:0.1
Content:ConcreteObserver.h
************************************************/
#ifndef DESIGNPATTERN_CONCRETEOBSERVER_H
#define DESIGNPATTERN_CONCRETEOBSERVER_H

#include"Observer.h"
#include<string>
#include<iostream>

class Concretebserver:public Observer{
public:
	Concretebserver(std::string name){
		m_name = name;
	}

	void Update(float price) {
		std::cout << m_name << " - price" << price << "\n";
	}

private:
	std::string m_name;
};
#endif  //DESIGNPATTERN_CONCRETEOBSERVER_H 