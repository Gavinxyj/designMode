#ifndef __LENOVOSTYLEKEYBOARD__
#define __LENOVOSTYLEKEYBOARD__
#include "keyBoardProduct.h"


class CLenovoStyleKeyBoard : public CKeyBoardProduct
{
public:
	CLenovoStyleKeyBoard();
	~CLenovoStyleKeyBoard();
public:
	virtual void createKeyBoard();
};

#endif