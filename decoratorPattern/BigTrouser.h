#ifndef __BIGTROUSER__
#define __BIGTROUSER__
#include "Decorator.h"
#include<iostream>
class CBigTrouser : public CDecorator
{
public:
	CBigTrouser(CPerson *person): CDecorator(person){}
	~CBigTrouser(){}
public:
	virtual void showDecorate()
	{
		addBigTrouser();
		CDecorator::showDecorate();
	}
	
	void addBigTrouser()
	{
		std::cout << "big trouser is decorated" << std::endl;	
	}
};
	
#endif