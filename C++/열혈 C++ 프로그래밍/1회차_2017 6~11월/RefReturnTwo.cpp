#include <iostream>
using namespace std;

int& RefRetFuncOne(int &ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num_1 = 1;
	int num_2 = RefRetFuncOne(num_1);

	num_1 += 1;
	num_2 += 100;
	
	cout << "num_1: " << num_1 << endl;
	cout << "num_2: " << num_2 << endl << endl;

	return 0;
}