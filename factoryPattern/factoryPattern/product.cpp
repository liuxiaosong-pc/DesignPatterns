/*************************************************
Author£ºliuxiaosong
Email£º18789445338@163.com
Data:2020/5/5
Version:0.1
Content:product.cpp
************************************************/

#include "Product.h"

RedPenCore::RedPenCore()
{
	color = "Red";
}

void RedPenCore::writeWord(string s)
{
	cout << "write " << color << "  " << s << endl;
}

BluePenCore::BluePenCore()
{
	color = "Blue";
}

void BluePenCore::writeWord(string s)
{
	cout << "write " << color << "  " << s << endl;
}

BlackPenCore::BlackPenCore()
{
	color = "Black";
}

void BlackPenCore::writeWord(string s)
{
	cout << "write " << color << "  " << s << endl;
}