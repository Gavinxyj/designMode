#ifndef __PERSION__
#define __PERSION__

class CPerson
{
public:
	CPerson(){};
	virtual ~CPerson(){};
public:
	virtual void showDecorate() = 0;
};

#endif