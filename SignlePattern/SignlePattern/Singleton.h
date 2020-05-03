/*************************************************
Author:liuxiaosong
Email��18789445338@163.com
Data:2020/5/3
Version:0.1
Content:Singleton.h
************************************************/
#ifndef DESIGNPATTERN_SINGLETON_H
#define DESIGNPATTERN_SINGLETON_H

class Singleton {
private:
	Singleton(){}  //  ����ģʽ�Ĺ��캯��������private
	~Singleton(){}
	Singleton(const Singleton &);
	Singleton & operator= (const Singleton &);

public:
	static Singleton & GetInstance()
	{
		static Singleton instance;
		return instance;
	}

	void DoSomething();
};
#endif //DESIGNPATTERN_SINGLETON_H




/**
// ����ģʽ������ʵ��
class Singleton {
private:
	Singleton() { }
	static Singleton * pInstance;
public:
	static Singleton * GetInstance() {
		if (pInstance == nullptr)
			pInstance = new Singleton();
			return pInstance;
		}
};

// �̰߳�ȫ�ĵ���ģʽ
class Singleton {
private:
	Singleton() { }
	~Singleton() { }
	Singleton(const Singleton &);
	Singleton & operator = (const Singleton &);

public:
static Singleton & GetInstance() {
		static Singleton instance;
		return instance;
	}
};
**/