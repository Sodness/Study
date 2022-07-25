#include <iostream>
using namespace std;

class First
{
private:
	int num_1, num_2;

public:
	First(int n_1 = 0, int n_2 = 0) : num_1(n_1), num_2(n_2)
	{ }

	void ShowData() { cout << num_1 << ", " << num_2 << endl; }
};

class Second
{
private:
	int num_3, num_4;

public:
	Second(int n_3 = 0, int n_4 = 0) : num_3(n_3), num_4(n_4)
	{ }

	void ShowData() { cout << num_3 << ", " << num_4 << endl; }

	Second & operator= (const Second & ref)
	{
		cout << "Second & operator= ()" << endl;

		num_3 = ref.num_3;
		num_4 = ref.num_4;

		return *this;
	}
};

int main(void)
{
	First fsrc(111, 222);
	First fcpy;
	Second ssrc(333, 444);
	Second scpy;

	fcpy = fsrc;
	scpy = ssrc;

	fcpy.ShowData();
	scpy.ShowData();

	First fob_1, fob_2;
	Second sob_1, sob_2;

	fob_1 = fob_2 = fsrc;
	sob_1 = sob_2 = ssrc;

	fob_1.ShowData();
	fob_2.ShowData();
	sob_1.ShowData();
	sob_2.ShowData();

	return 0;
}