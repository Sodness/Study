#include <iostream>
using namespace std;

template <typename T>

T Add(T num_1, T num_2)
{
	return num_1 + num_2;
}

int main(void)
{
	cout << Add<int>(15, 20) << endl;
	cout << Add<double>(2.9, 3.7) << endl;
	cout << Add<int>(15, 20) << endl;
	cout << Add<double>(3.14, 2.75) << endl;

	return 0;
}