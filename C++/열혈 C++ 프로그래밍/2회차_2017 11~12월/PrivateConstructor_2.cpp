#include <iostream>
using namespace std;

class AAA
{
private:
	int num;

public:
	AAA() : num(0) { }
	
	AAA& CreateInitObj(int n) const
	{
		AAA *ptr = new AAA(n);
		return *ptr;
	}

	void ShowNum() const { cout << num << endl; }

private:
	AAA(int n) : num(n) { }
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA &obj_1 = base.CreateInitObj(3);
	obj_1.ShowNum();

	AAA &obj_2 = base.CreateInitObj(12);
	obj_2.ShowNum();

	delete &obj_1;
	delete &obj_2;

	return 0;
}