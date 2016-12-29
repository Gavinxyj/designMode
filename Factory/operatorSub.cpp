#include "operatorSub.h"

template<class T>
COperatorSub<T>::COperatorSub()
{
	
}

template<class T>
COperatorSub<T>::~COperatorSub()
{
	
}
template<class T>
T COperatorSub<T>::getResult(const T* a, const T* b)
{
	return *a - *b;	
}