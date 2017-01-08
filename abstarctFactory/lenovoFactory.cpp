#include "lenovoFactory.h"
#include "lenovoStyleKeyBoard.h"
#include "lenovoStyleMouse.h"
CLenovoFactory::CLenovoFactory()
{
	
}


CLenovoFactory::~CLenovoFactory()
{
	
}

CKeyBoardProduct* CLenovoFactory::createKeyBoardProduct()
{
	return new 	CLenovoStyleKeyBoard();
}


CMouseProduct* CLenovoFactory::createMouseProduct()
{
	return new CLenovoStyleMouse();
}