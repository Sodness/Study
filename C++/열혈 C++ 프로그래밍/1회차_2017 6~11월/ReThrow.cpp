#include <iostream>
using namespace std;

void Divide(int num_1, int num_2)
{
	try
	{
		if (num_2 == 0)
			throw 0;

		cout << "¸ò: " << num_1 / num_2 << endl;
		cout << "³ª¸ÓÁö: " << num_1 % num_2 << endl;
	}
	catch (int expn)
	{
		cout << "first catch" << endl;
		throw;
	}
}

int main(void)
{
	try
	{
		Divide(9, 2);
		Divide(4, 0);
	}
	catch (int expn)
	{
		cout << "secon catch" << endl;
	}

	return 0;
}