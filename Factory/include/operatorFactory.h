#ifndef __OPERATORFACOTRY__
#define __OPERATORFACOTRY__

#include "operation.h"

template<class T>
class COperatorFactory
{
public:
	COperatorFactory();
	~COperatorFactory();
public:

	COperation<T>* createOperator(char operate);
};

#endif