#ifndef __OPERATORDIV__
#define __OPERATORDIV__

#include "operation.h"

template<class T>
class COperatorDiv : public COperation<T>
{
public:
	COperatorDiv();
	~COperatorDiv();
public:
	virtual T getResult(const T*, const T*);	
};

#endif