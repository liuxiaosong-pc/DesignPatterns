/*************************************************
Author£ºliuxiaosong
Email£º18789445338@163.com
Data:2020/5/2
Version:0.1
Content:main.h
************************C************************/
#ifndef DESIGNPATTERN_BRIDGEMAIN_H
#define DESIGNPATTERN_BRIDGEMAIN_H

#include "ConcreteAction.h"
#include "ConcreteImplementor.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=nullptr;} }
#endif

void main();

#endif //DESIGNPATTERN_BRIDGEMAIN_H