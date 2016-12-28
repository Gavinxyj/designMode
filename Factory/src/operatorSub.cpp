#include "operatorAdd.h"

T COperatorAdd::getResult(const T* a, const T* b)
{
	return *a - *b;	
}