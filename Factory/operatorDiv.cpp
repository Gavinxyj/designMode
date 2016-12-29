#include "operatorDiv.h"

template<class T>
COperatorDiv<T>::COperatorDiv()
{
	
}

template<class T>
COperatorDiv<T>::~COperatorDiv()
{
	
}
template<class T>
T COperatorDiv<T>::getResult(const T* a, const T* b)
{
	return *a / *b;	
}