#ifndef __TSHIRTS__
#define __TSHIRTS__
#include "Finery.h"
#include<iostream>
class CTshirts : public CDecorator
{
public:
	CTshirts(CPerson *person): CDecorator(person){}
	~CTshirts(){};
public:
	virtual void showDecorate()
	{
			addTShirts();
			CDecorator::showDecorate();
	}
	
	void addTShirts()
	{
		std::cout<< "Tshirts is decorated" << std::endl;
	}
};
	
#endif