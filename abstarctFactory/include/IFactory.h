#ifndef __IFACTORY__
#define __IFACTORY__
#include "keyBoardProduct.h"
#include "mouseProduct.h"

class IFactory
{
public:
	IFactory(){};
	virtual ~IFactory(){};
public:
	virtual CKeyBoardProduct* createKeyBoardProduct() = 0;
	virtual CMouseProduct* createMouseProduct() = 0;
};

#endif