#include <iostream>
#include "operatorFactory.cpp"
#include "operation.cpp"
int main(void)
{
	//COperation<int> oper;
	COperatorFactory<int>factory;
	//factory.createOperator('+');
	std::cout<<"hello world!"<<std::endl;
	return 0;
}