#include "operatorSub.h"

template<class T>
T COperatorSub<T>::getResult(const T* a, const T* b)
{
	return *a - *b;	
}