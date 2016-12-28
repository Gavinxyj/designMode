#ifndef __OPERATORSUB__
#define __OPERATORSUB__

#include "operation.h"

template<class T>
class COperatorSub : public COperation<T>
{
public:
	COperatorSub();
	~COperatorSub();
public:
	virtual T getResult(const T*, const T*);
};

#endif