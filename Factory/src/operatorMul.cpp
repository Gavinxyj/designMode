#include "operatorMul.h"

T COperatorMul::getResult(const T* a, const T* b)
{
	return *a - *b;	
}