#include <iostream>
using namespace std;

template <class T>

T SumArray(T arr[], int len)
{
	T sum = (T)0;

	for (int i = 0; i < len; i++)
		sum += arr[i];

	return sum;
}

int main(void)
{
	int arr[] = {10, 20, 30};
	cout << SumArray(arr, 3) << endl;

	double arr_1[] = { 1.1, 2.2, 3.3 };
	cout << SumArray(arr_1, 3) << endl << endl;
}