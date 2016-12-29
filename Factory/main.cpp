#include <iostream>
#include "operatorFactory.cpp"
#include "operation.cpp"
#include "operatorAdd.cpp"
#include "operatorSub.cpp"
#include "operatorMul.cpp"
#include "operatorDiv.cpp"
int main(void)
{
	COperation<int> *oper;
	COperatorFactory<int>factory;
	oper = factory.createOperator('/');
	int a = 10;
	int b = 20;
	int nRet = oper->getResult(&a, &b);
	std::cout<<"nRet = "<< nRet << std::endl;
	return 0;
}