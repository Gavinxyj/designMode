#ifndef __OPERATION__
#define __OPERATION__

template<class T>
class COperation
{
public:
	COperation(){};
  virtual ~COperation(){};
public:
	virtual T getResult(const T* a, const T* b) = 0;
};

#endif