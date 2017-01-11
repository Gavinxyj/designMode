#ifndef __CASHRETURN__
#define __CASHRETURN__
#include "cashSuper.h"

class CCashReturn : public CCashSuper
{
public:
	CCashReturn(double moneycondition = 0.0, double moneyReturn = 0.0)
	{
		this->m_moneycondition   = moneycondition;
		this->m_moneyReturn      = moneyReturn;
	};
	~CCashReturn(){};
public:
	double acceptCash(double money)
	{
		if(money > m_moneycondition)
		{
			return money - ((money / m_moneycondition) * m_moneyReturn);	
		}
	}
private:
	double m_moneycondition;
	double m_moneyReturn;
};
#endif