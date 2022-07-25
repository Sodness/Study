#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num_1;
	mutable int num_2;

public:
	SoSimple(int n_1, int n_2)
		: num_1(n_1), num_2(n_2)
	{ }

	void ShowSimpleData() const
	{
		cout << num_1 << ", " << num_2 << endl;
	}

	void CopyToNum_2() const
	{
		num_2 = num_1;
	}
};

int main(void)
{
	SoSimple sm(1, 2);

	sm.ShowSimpleData();
	sm.CopyToNum_2();
	sm.ShowSimpleData();

	return 0;
}