#ifndef __MACSYTLEMOUSE__
#define __MACSYTLEMOUSE__
#include "mouseProduct.h"


class CMacSytleMouse : public CMouseProduct
{
public:
	CMacSytleMouse();
	~CMacSytleMouse();
public:
	virtual void createMouse();
};

#endif