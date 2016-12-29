#include "operatorAdd.h"

template<class T>
COperatorAdd<T>::COperatorAdd()
{
	
}

template<class T>
COperatorAdd<T>::~COperatorAdd()
{
	
}
template<class T>
T COperatorAdd<T>::getResult(const T* a, const T* b)
{
	return *a - *b;	
}