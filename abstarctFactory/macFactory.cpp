#include "macFactory.h"
#include "macStyleKeyBoard.h"
#include "macStyleMouse.h"
CMacFactory::CMacFactory()
{
	
}


CMacFactory::~CMacFactory()
{
	
}


CKeyBoardProduct* CMacFactory::createKeyBoardProduct()
{
	return new CMacStyleKeyBoard();
}


CMouseProduct* CMacFactory::createMouseProduct()
{
	return new CMacSytleMouse();
}