#include <iostream>
using namespace std;

namespace A
{
	namespace B
	{
		namespace C
		{
			int num_1;
			int num_2;
		}
	}
}

int main(void)
{
	A::B::C::num_1 = 20;
	A::B::C::num_2 = 30;

	namespace ABC = A::B::C;

	cout << ABC::num_1 << endl;
	cout << ABC::num_2 << endl;

	return 0;
}