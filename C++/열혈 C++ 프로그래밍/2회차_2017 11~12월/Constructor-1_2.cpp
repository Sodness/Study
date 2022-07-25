#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num_1;
	int num_2;

public:
	SimpleClass()
	{
		num_1 = 0;
		num_2 = 0;
	}

	SimpleClass(int n)
	{
		num_1 = n;
		num_2 = 0;
	}

	SimpleClass(int n_1, int n_2)
	{
		num_1 = n_1;
		num_2 = n_2;
	}
	/*
	SimpleClass(int n_1 = 0, int n_2 = 0)
	{
		num_1 = n_1;
		num_2 = n_2;
	}
	*/
	void ShowData() const
	{
		cout << num_1 << ' ' << num_2 << endl;
	}
};

int main(void)
{
	SimpleClass sc_1;
	sc_1.ShowData();

	SimpleClass sc_2(100);
	sc_2.ShowData();

	SimpleClass sc_3(100, 200);
	sc_3.ShowData();

	return 0;
}