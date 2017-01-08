#ifndef __KEYBOARDRODUCT__
#define __KEYBOARDRODUCT__

class CKeyBoardProduct
{
public:
	CKeyBoardProduct(){};
	virtual ~CKeyBoardProduct(){};
public:
	virtual void createKeyBoard() = 0;
};

#endif