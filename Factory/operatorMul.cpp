#include "operatorMul.h"


template<class T>
COperatorMul<T>::COperatorMul()
{
	
}

template<class T>
COperatorMul<T>::~COperatorMul()
{
	
}

template<class T>
T COperatorMul<T>::getResult(const T* a, const T* b)
{
	return *a * *b;	
}