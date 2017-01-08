#ifndef __MACSTYLEKEYBOARD__
#define __MACSTYLEKEYBOARD__
#include "keyBoardProduct.h"


class CMacStyleKeyBoard : public CKeyBoardProduct
{
public:
	CMacStyleKeyBoard();
	~CMacStyleKeyBoard();
public:
	virtual void createKeyBoard();
};

#endif