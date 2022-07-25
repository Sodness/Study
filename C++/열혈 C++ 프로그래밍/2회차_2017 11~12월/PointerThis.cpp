#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{
		cout << "num = " << num << ", ";
		cout << "address = " << this << endl;
	}

	void ShowSimpleData()
	{
		cout << num << endl;
	}

	SoSimple * GetThisPointer()
	{
		return this;
	}
};

int main(void)
{
	SoSimple sim_1(100);
	SoSimple *ptr_1 = sim_1.GetThisPointer();
	cout << ptr_1 << ", ";
	ptr_1->ShowSimpleData();

	SoSimple sim_2(200);
	SoSimple *ptr_2 = sim_2.GetThisPointer();
	cout << ptr_2 << ", ";
	ptr_2->ShowSimpleData();

	return 0;
}