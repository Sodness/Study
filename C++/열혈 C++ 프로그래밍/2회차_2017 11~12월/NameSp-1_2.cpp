#include <iostream>
using namespace std;

namespace A
{
	void SimpleFunc(void)
	{
		cout << "A���� ������ �Լ�" << endl;
	}
}

namespace B
{
	void SimpleFunc(void)
	{
		cout << "B���� ������ �Լ�" << endl;
	}
}

int main(void)
{
	A::SimpleFunc();
	B::SimpleFunc();

	return 0;
}