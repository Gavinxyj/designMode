#ifndef __OPERATORADD__
#define __OPERATORADD__

#include "operation.h"

template<class T>
class COperatorAdd : public COperation<T>
{
public:
	COperatorAdd();
	~COperatorAdd();
public:
	virtual T getResult(const T*, const T*);	
};

#endif