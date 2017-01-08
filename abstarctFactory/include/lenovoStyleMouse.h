#ifndef __LENOVOSYTLEMOUSE__
#define __LENOVOSYTLEMOUSE__
#include "mouseProduct.h"


class CLenovoStyleMouse : public CMouseProduct
{
public:
	CLenovoStyleMouse();
	~CLenovoStyleMouse();
public:
	virtual void createMouse();
};

#endif