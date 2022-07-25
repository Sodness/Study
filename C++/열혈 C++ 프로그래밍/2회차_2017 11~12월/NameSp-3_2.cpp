#include <iostream>
using namespace std;

namespace A
{
	void FuncOne(void);
	void PrettyFunc(void);
}

namespace B
{
	void FuncTwo(void);
}

int main(void)
{
	A::FuncOne();

	return 0;
}

void A::FuncOne(void)
{
	cout << "FuncOne() called" << endl;

	PrettyFunc();
	B::FuncTwo();
}

void A::PrettyFunc()
{
	cout << "PrettyFunc() called" << endl;
}

void B::FuncTwo()
{
	cout << "FuncTwo() called" << endl;
}