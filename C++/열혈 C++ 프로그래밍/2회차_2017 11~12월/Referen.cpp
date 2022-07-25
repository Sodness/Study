#include <iostream>
using namespace std;

int main(void)
{
	int num_1 = 1020;
	int &num_2 = num_1;

	num_2 = 3047;
	cout << "VAL: " << num_1 << endl;
	cout << "REF: " << num_2 << endl;

	cout << "VAL: " << &num_1 << endl;
	cout << "REF: " << &num_2 << endl;

	return 0;
}