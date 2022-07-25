#include <iostream>
using namespace std;

template <typename T_1, typename T_2>
class MySimple
{
public:
	void WhoAreYou()
	{
		cout << "size of T_1: " << sizeof(T_1) << endl;
		cout << "size of T_2: " << sizeof(T_2) << endl;
		cout << "<typename T_1, typename T_2>" << endl;
	}
};

template <>	
class MySimple<int, double>
{
public:
	void WhoAreYou()
	{
		cout << "size of int: " << sizeof(int) << endl;
		cout << "size of double: " << sizeof(double) << endl;
		cout << "<int, double>" << endl;
	}
};


template <typename T_1>
class MySimple<T_1, double>
{
public:
	void WhoAreYou()
	{
		cout << "size of T_1: " << sizeof(T_1) << endl;
		cout << "size of double: " << sizeof(double) << endl;
		cout << "<T_1, double>" << endl;
	}
};


int main(void)
{
	MySimple<char, double> obj_1;
	obj_1.WhoAreYou();

	MySimple<int, long> obj_2;
	obj_2.WhoAreYou();

	MySimple<int, double> obj_3;
	obj_3.WhoAreYou();

	return 0;
}