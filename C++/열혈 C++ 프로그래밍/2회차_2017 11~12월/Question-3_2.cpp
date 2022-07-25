#include <iostream>
using namespace std;

void SwapPointer(int *(&pref_1), int *(&pref_2));

int main(void)
{
	int num_1 = 5;
	int *ptr_1 = &num_1;
	
	int num_2 = 10;
	int *ptr_2 = &num_2;

	SwapPointer(ptr_1, ptr_2);

	cout << "num_1: " << *ptr_1 << endl;
	cout << "num_2: " << *ptr_2 << endl;

	return 0;
}

void SwapPointer(int *(&pref_1), int *(&pref_2))
{
	int *tmp;

	tmp = pref_1;
	pref_1 = pref_2;
	pref_2 = tmp;
}