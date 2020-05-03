/*************************************************
Author:liuxiaosong
Email：18789445338@163.com
Data:2020/5/2
Version:0.1
Content:main.h
************************************************/
#ifndef DESIGNPATTERN_MAIN_H
#define DESIGNPATTERN_MAIN_H


#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=nullptr;} }
#endif

void main();

#endif //DESIGNPATTERN_OBSERVERMAIN_H

