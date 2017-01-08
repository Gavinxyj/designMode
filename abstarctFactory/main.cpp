#include <iostream>
#include "IFactory.h"
#include "macFactory.h"
#include "mouseProduct.h"
#include "keyBoardProduct.h"
#include "lenovoFactory.h"
int main(void)
{
	//获取一个苹果风格的鼠标
	IFactory *factory = new CMacFactory();
	CMouseProduct * macMouse = factory->createMouseProduct();
	macMouse->createMouse();
	
	
	//获取一个苹果风格的键盘
	CKeyBoardProduct *keyBoard = factory->createKeyBoardProduct();
	keyBoard->createKeyBoard();
	
	//获取一个联想风格的鼠标
	IFactory *lenovoFactory = new CLenovoFactory();
	CMouseProduct *lenovoMouse = lenovoFactory->createMouseProduct();
	lenovoMouse->createMouse();
	
	//获取一个联想风格的键盘
	CKeyBoardProduct *lenovoKeyBoard = lenovoFactory->createKeyBoardProduct();
	lenovoKeyBoard->createKeyBoard();
	
	if(0 != factory)
	{
		delete factory;
		factory = 0;	
	}
	
	if(0 != macMouse)
	{
		delete macMouse;
		macMouse = 0;	
	}
	
	if(0 != keyBoard)
	{
		delete keyBoard;
		keyBoard = 0;	
	}
	
	if(0 != lenovoFactory)
	{
		delete lenovoFactory;
		lenovoFactory = 0;	
	}
	
	if(0 != lenovoMouse)
	{
		delete lenovoMouse;
		lenovoMouse = 0;	
	}
	
	if(0 != lenovoKeyBoard)
	{
		delete lenovoKeyBoard;
		lenovoKeyBoard = 0;	
	}
	return 0;	
}