#ifndef __OPERATORMUL__
#define __OPERATORMUL__

#include "operation.h"

template<class T>
class COperatorMul : public COperation<T>
{
public:
	COperatorMul();
	~COperatorMul();
public:
	virtual T getResult(const T*, const T*);
};

#endif