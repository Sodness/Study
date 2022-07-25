#include <iostream>
using namespace std;

int main(void)
{
	int arr[3] = { 1, 3, 5 };
	int &ref_1 = arr[0];
	int &ref_2 = arr[1];
	int &ref_3 = arr[2];

	cout << ref_1 << endl;
	cout << ref_2 << endl;
	cout << ref_3 << endl;

	return 0;
}