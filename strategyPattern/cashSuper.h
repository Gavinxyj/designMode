#ifndef __CASHSUPER__
#define __CASHSUPER__
#include<iostream>

class CCashSuper
{
public:
	CCashSuper(){};
	virtual ~CCashSuper(){};
public:
	virtual double acceptCash(double money) = 0;
};

#endif