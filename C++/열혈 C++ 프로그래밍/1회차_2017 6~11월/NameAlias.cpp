#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num_1;
			int num_2;
		}
	}
}

int main(void)
{
	AAA::BBB::CCC::num_1 = 20;
	AAA::BBB::CCC::num_2 = 30;

	namespace ABC = AAA::BBB::CCC;

	cout << ABC::num_1 << endl;
	cout << ABC::num_2 << endl;
	return 0;
}