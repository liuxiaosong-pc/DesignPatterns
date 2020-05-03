/*************************************************
Author:liuxiaosong
Email：18789445338@163.com
Data:2020/5/2
Version:0.1
Content:ConcreteSubject.h
************************************************/
#ifndef DESIGNPATTERN_CONCRETESUBJECT_H
#define DESIGNPATTERN_CONCRETESUBJECT_H

#include <list>
#include <iostream>
#include "Observer.h"
#include "Subject.h"


class ConcreteSubjcet : public Subjcet{
public:
	// Default constructor
	ConcreteSubjcet() { m_price = 10.0; }

	void Attach(Observer *observer){
		m_observer.push_back(observer);
	}

	void Detach(Observer *observer){
		std::list<Observer*>::iterator iter;
		for (iter = m_observer.begin(); iter != m_observer.end(); iter++) {
			if (*iter == observer){
				m_observer.remove(observer);
			}
		}
	}

	void Notify(){
		std::list<Observer*>::iterator iter;
		for (iter = m_observer.begin(); iter != m_observer.end(); iter++) {
			(*iter)->Update(m_price);
		}
	}

	void SignalPrice(float price) {
		m_price = price;
		Notify();
	}
private:
	std::list<Observer*> m_observer;
	float m_price;
};
#endif  // DESIGNPATTERN_CONCRETESUBJECT_H