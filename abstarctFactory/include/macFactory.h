#ifndef __MACFACTORY__
#define __MACFACTORY__

#include "IFactory.h"
class CMacFactory : public IFactory
{
public:
	CMacFactory();
	~CMacFactory();
public:
	virtual CKeyBoardProduct* createKeyBoardProduct();
	virtual CMouseProduct* createMouseProduct();
};

#endif