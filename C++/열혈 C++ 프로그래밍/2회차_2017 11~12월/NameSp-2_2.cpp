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
	cout << "A���� ������ �Լ�" << endl;
}

void B::SimpleFunc(void)
{
	cout << "B���� ������ �Լ�" << endl;
}