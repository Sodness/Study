#include <iostream>
using namespace std;

void SwapByRef_2(int &ref_1, int &ref_2)
{
	int temp = ref_1;
	ref_1 = ref_2;
	ref_2 = temp;
}

int main(void)
{
	int val_1 = 10;
	int val_2 = 20;

	SwapByRef_2(val_1, val_2);
	
	cout << "val_1: " << val_1 << endl;
	cout << "vla_2: " << val_2 << endl;

	return 0;
}