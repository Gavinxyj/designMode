#ifndef __DECORATOR__
#define __DECORATOR__
#include "Finery.h"
#include<iostream>
class CDecorator : public CFinery
{
public:
	CDecorator(CPerson *person):m_person(person){}
	~CDecorator(){}
public:
	virtual void showDecorate()
	{
			if(0 != m_person)
			{
					m_person->showDecorate();
			}
	}
private:
	CPerson *m_person;
};
	
#endif