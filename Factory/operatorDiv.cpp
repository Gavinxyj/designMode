#include "operatorDiv.h"

template<class T>
T COperatorDiv<T>::getResult(const T* a, const T* b)
{
	return *a / *b;	
}