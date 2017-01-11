#ifndef __CASHCONTEXT__
#define __CASHCONTEXT__
#include<iostream>
#include "cashSuper.h"
#include "cashNormal.h"
#include "cashRebate.h"
#include "cashReturn.h"
#include <string.h>
class CCashFactory
{
public:
	CCashFactory(){};
	~CCashFactory(){};
public:
	CCashSuper * createAcceptCash(std::string type)
	{
		if(strcmp((char*)"normal", type.c_str()) == 0)
		{
			return new CCashNormal();	
		}
		else if(strcmp((char*)"rebate", type.c_str()) == 0)
		{
			return new CCashRebate(0.8);	
		}
		else if(strcmp((char*)"return", type.c_str()) == 0)
		{
			return new CCashReturn(300, 100);	
		}
		return 0;
	}
};

#endif