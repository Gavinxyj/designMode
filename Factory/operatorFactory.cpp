#include "operatorFactory.h"
#include "operatorAdd.h"
#include "operatorSub.h"
#include "operatorMul.h"
#include "operatorDiv.h"

template<class T>
COperatorFactory<T>::COperatorFactory()
{
	
}

template<class T>
COperatorFactory<T>::~COperatorFactory()
{
	
}


template<class T>
COperation<T>* COperatorFactory<T>::createOperator(char operate)
{
	COperation<T> *oper;
	switch(operate)
	{
		case '+':
			oper = new COperatorAdd<T>;
			break;
		case '-':
			oper = new COperatorSub<T>();
			break;
		case '*':
			oper = new COperatorMul<T>();
			break;
		case '/':
			oper = new COperatorDiv<T>();
			break;
		default:
			oper = 0;
	}
	
	return oper;
}