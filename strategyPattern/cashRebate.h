#ifndef __CASHREBATE__
#define __CASHREBATE__

#include "cashSuper.h"

class CCashRebate : public CCashSuper
{
public:
	CCashRebate(double rebate = 0.0)
	{
		this->m_rebate = rebate;
	};
	~CCashRebate(){};
public:
  double acceptCash(double money)
  {
  	return money * m_rebate;	
  }
private:
	double m_rebate;
};

#endif