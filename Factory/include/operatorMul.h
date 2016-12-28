class COperatorMul : public operation
{
public:
	COperatorMul();
	~COperatorMul();
public:
	virtual T getResult(const T*, const T*);
};