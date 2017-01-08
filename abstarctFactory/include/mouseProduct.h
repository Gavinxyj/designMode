#ifndef __MOUSEPRODUCT__
#define __MOUSEPRODUCT__

class CMouseProduct
{
public:
	CMouseProduct(){};
	virtual ~CMouseProduct(){};
public:
	virtual void createMouse() = 0;
};

#endif