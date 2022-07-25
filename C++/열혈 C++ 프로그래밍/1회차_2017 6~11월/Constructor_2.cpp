#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num_1;
	int num_2;

public:
	SimpleClass(int n_1 = 0, int n_2 = 0)
	{
		num_1 = n_1;
		num_2 = n_2;
	}

	void ShowData() const
	{
		cout << num_1 << ' ' << num_2 << endl;
	}
};

int main(void)
{
	SimpleClass sc_1();
	SimpleClass mysc = sc_1();
	mysc.ShowData();

	return 0;
}

SimpleClass sc_1()
{
	SimpleClass sc(20, 30);

	return sc;
}