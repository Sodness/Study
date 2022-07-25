#include <iostream>
using namespace std;

class Base
{
private:
	int num_1;

protected:
	int num_2;

public:
	int num_3;

	Base() : num_1(1), num_2(2), num_3(3)
	{ }
};

class Derived : protected Base { };

int main(void)
{
	Derived drv;

	cout << drv.num_3 << endl;

	return 0;
}