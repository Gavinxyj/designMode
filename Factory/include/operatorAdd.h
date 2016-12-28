class COperatorAdd : public operation
{
public:
	COperatorAdd();
	~COperatorAdd();
public:
	virtual T getResult(const T*, const T*);	
};