#include <iostream>
using namespace std;

namespace A
{
	void SimpleFunc(void);
}

namespace B
{
	void SimpleFunc(void);
}

int main(void)
{
	A::SimpleFunc();
	B::SimpleFunc();

	return 0;
}

void A::SimpleFunc(void)
{
	cout << "A에서 정의한 함수" << endl;
}

void B::SimpleFunc(void)
{
	cout << "B에서 정의한 함수" << endl;
}