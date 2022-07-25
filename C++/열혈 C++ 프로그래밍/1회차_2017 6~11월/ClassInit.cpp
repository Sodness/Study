#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num_1;
	int num_2;

public:
	SoSimple(int n_1, int n_2)
		: num_1(n_1), num_2(n_2)
	{
		// empty
	}

	SoSimple(SoSimple &copy)
		: num_1(copy.num_1), num_2(copy.num_2)
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl;
	}

	void ShowSimpleData()
	{
		cout << num_1 << endl;
		cout << num_2 << endl;
	}
};

int main(void)
{
	SoSimple sim_1(15, 30);

	cout << "생성 및 초기화 직전" << endl;

	SoSimple sim_2 = sim_1; // SoSimple sim_2(sim_1);

	cout << "생성 및 초기화 직후" << endl;

	sim_2.ShowSimpleData();

	return 0;
}