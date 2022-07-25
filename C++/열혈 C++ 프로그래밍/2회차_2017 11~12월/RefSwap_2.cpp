#include <iostream>
using namespace std;

void SwapByRef2(int &ref_1, int &ref_2)
{
	int tmp;

	tmp = ref_1;
	ref_1 = ref_2;
	ref_2 = tmp;
}

int main(void)
{
	int val_1 = 10;
	int val_2 = 20;

	SwapByRef2(val_1, val_2);

	cout << "val_1: " << val_1 << endl;
	cout << "val_2: " << val_2 << endl << endl;

	return 0;
}