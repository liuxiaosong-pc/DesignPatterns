/*************************************************
Author:liuxiaosong@163.com
Data:2020/4/19
Version:0.1
Content:main.h
************************************************/
#ifndef DESIGNPATTERN_MAIN_H
#define DESIGNPATTERN_MAIN_H

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p) {delete(p); (p)=nullptr;}}
#endif

void main();

#endif //DESIGNPATTERN_MAIN_H