#include <iostream>
using namespace std;

int Adder(int num_1 = 1, int num_2 = 2)
{
	return num_1 + num_2;
}

int main(void)
{
	cout << Adder() << endl;
	cout << Adder(5) << endl;
	cout << Adder(3,5) << endl;

	return 0;
}