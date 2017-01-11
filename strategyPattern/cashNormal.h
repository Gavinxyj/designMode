#ifndef __CASHNORMAL__
#define __CASHNORMAL__
#include<iostream>
#include "cashSuper.h"

class CCashNormal : public CCashSuper
{
public:
	CCashNormal(){};
	~CCashNormal(){};
public:
  double acceptCash(double money)
  {
  	return money;	
  }
};

#endif