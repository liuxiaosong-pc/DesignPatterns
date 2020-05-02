/*************************************************
Author:liuxiaosong@163.com
Data:2020/5/2
Version:0.1
Content:Subject.h
************************************************/

#ifndef DESIGNPATTERN_SUBJECT_H
#define DESIGNPATTERN_SUBJECT_H

class Observer;
class Subjcet{
public:
	virtual void Attach(Observer *) = 0;   // Add Observer
	virtual void Detach(Observer *) = 0;   // Delete Observer
	virtual void Notify() = 0;             // Notify Observer
};
#endif  //DESIGNPATTERN_SUBJECT_H