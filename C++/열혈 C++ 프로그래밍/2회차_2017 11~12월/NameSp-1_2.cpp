#include <iostream>
using namespace std;

namespace A
{
	void SimpleFunc(void)
	{
		cout << "A에서 정의한 함수" << endl;
	}
}

namespace B
{
	void SimpleFunc(void)
	{
		cout << "B에서 정의한 함수" << endl;
	}
}

int main(void)
{
	A::SimpleFunc();
	B::SimpleFunc();

	return 0;
}