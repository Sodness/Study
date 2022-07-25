#include <iostream>
using namespace std;

template <typename T>

T Add(T num_1, T num_2)
{
	cout << "T Add(T num_1, T num_2)" << endl;
	return num_1 + num_2;
}

int Add(int num_1, int num_2)
{
	cout << "Add(int num_1, int num_2)" << endl;
	return num_1 + num_2;
}

double Add(double num_1, double num_2)
{
	cout << "Add(double num_1, double num_2)" << endl;
	return num_1 + num_2;
}

int main(void)
{
	cout << Add(5, 7) << endl;
	cout << Add(3.7, 7.5) << endl;
	cout << Add<int>(5, 7) << endl;
	cout << Add<double>(3.7, 7.5) << endl;

	return 0;
}