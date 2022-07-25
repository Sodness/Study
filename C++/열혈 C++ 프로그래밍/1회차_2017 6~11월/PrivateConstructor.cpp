#include <iostream>
using namespace std;

class AAA
{
private:
	int num;

public:
	AAA() : num(0) { cout << 'C' << endl; }

	AAA& CreateInitObj(int n) const
	{
		cout << 'A' << endl;
		AAA *ptr = new AAA(n);
		cout << 'X' << endl;
		return *ptr;
	}

	void ShowNum() const
	{
		cout << 'B' << endl;
		cout << num << endl;
	}

private:
	AAA(int n) : num(n) { cout << 'D' << endl; }
};

int main(void) 
{
	AAA base;
	base.ShowNum();
	cout << endl;

	AAA &obj_1 = base.CreateInitObj(3);
	obj_1.ShowNum();
	cout << endl;

	AAA &obj_2 = base.CreateInitObj(12);
	obj_2.ShowNum();
	cout << endl;

	delete &obj_1;
	delete &obj_2;

	return 0;
}