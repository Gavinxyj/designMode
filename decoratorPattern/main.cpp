#include "Person.h"
#include "Finery.h"
#include "BigTrouser.h"
#include "TShirts.h"
int main(void)
{
	CPerson *person = new CFinery();
	
	CDecorator *pDecObjA = new CBigTrouser(person);
	CDecorator *pDecObjB = new CTshirts(person);
	
	pDecObjB->showDecorate();
	
	return 0;	
}