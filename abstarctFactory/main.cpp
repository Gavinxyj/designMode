#include <iostream>
#include "IFactory.h"
#include "macFactory.h"
#include "mouseProduct.h"
#include "keyBoardProduct.h"
#include "lenovoFactory.h"
int main(void)
{
	//��ȡһ��ƻ���������
	IFactory *factory = new CMacFactory();
	CMouseProduct * macMouse = factory->createMouseProduct();
	macMouse->createMouse();
	
	
	//��ȡһ��ƻ�����ļ���
	CKeyBoardProduct *keyBoard = factory->createKeyBoardProduct();
	keyBoard->createKeyBoard();
	
	//��ȡһ������������
	IFactory *lenovoFactory = new CLenovoFactory();
	CMouseProduct *lenovoMouse = lenovoFactory->createMouseProduct();
	lenovoMouse->createMouse();
	
	//��ȡһ��������ļ���
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