#include <iostream>
using namespace std;

int& RefReturnFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num_1 = 1;

	int& num_2 = RefReturnFuncOne(num_1);

	num_1++;
	num_2++;

	cout << "num_1: " << num_1 << endl;
	cout << "num_2: " << num_2 << endl << endl;

	return 0;
}