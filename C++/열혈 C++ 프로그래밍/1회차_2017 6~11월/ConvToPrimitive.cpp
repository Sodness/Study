#include <iostream>
using namespace std;

class Number
{
private:
	int num;

public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n = 0)" << endl;
	}

	Number & operator= (const Number & ref)
	{
		cout << "operator=()" << endl;

		num = ref.num;

		return *this;
	}

	operator int()
	{
		return num;
	}

	void ShowNumber()
	{
		cout << num << endl;
	}
};

int main(void)
{
	Number num_1;
	num_1 = 30;

	Number num_2 = num_1 + 20;
	num_2.ShowNumber();

	return 0;
}