#include <iostream>
using namespace std;

class AAA
{
private:
	int num_1;

public:
	virtual void Func_1() { cout << "Func_1" << endl; }
	virtual void Func_2() { cout << "Func_2" << endl; }
};

class BBB : public AAA
{
private:
	int num_2;

public:
	virtual void Func_1() { cout << "BBB::Func_1" << endl; }
	void Func_3() { cout << "Func_3" << endl; }
};

int main(void)
{
	AAA * aptr = new AAA();
	aptr->Func_1();

	BBB * bptr = new BBB();
	bptr->Func_1();

	return 0;
}