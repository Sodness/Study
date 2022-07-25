#include <iostream>
using namespace std;

class TwoNumber
{
private:
	int num_1;
	int num_2;

public:
	TwoNumber(int num_1, int num_2)
	{
		this -> num_1 = num_1;
		this -> num_2 = num_2;
	}
	/*
	TwoNumber(int num_1, int num_2)
		: num_1(num_1), num_2(num_2)
		{
			//empty
		}
	*/
	void ShowTwoNumber()
	{
		cout << this -> num_1 << endl;
		cout << this -> num_2 << endl;
	}
};

int main(void)
{
	TwoNumber two(2, 4);

	two.ShowTwoNumber();

	cout << endl;

	return 0;
}