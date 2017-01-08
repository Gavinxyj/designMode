#ifndef __LENOVOFACTORY__
#define __LENOVOFACTORY__

#include "IFactory.h"

class CLenovoFactory : public IFactory
{
public:
	CLenovoFactory();
  ~CLenovoFactory();
public:
	virtual CKeyBoardProduct* createKeyBoardProduct();
	virtual CMouseProduct* createMouseProduct();
};

#endif