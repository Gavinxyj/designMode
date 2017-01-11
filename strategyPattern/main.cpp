#include "cashContext.h"
#include<iostream>
int main(void)
{
	
	CCashFactory factory;
	//不打折
	CCashSuper *super = factory.createAcceptCash("normal");
	double ret = super->acceptCash(100);
	std::cout << "ret = " << ret << std::endl;
	
	//打折
	super = factory.createAcceptCash("rebate");
  ret = super->acceptCash(100);
	std::cout << "ret = " << ret << std::endl;
	
	//返现
	super = factory.createAcceptCash("return");
  ret = super->acceptCash(500);
	std::cout << "ret = " << ret << std::endl;
	return 0;	
}