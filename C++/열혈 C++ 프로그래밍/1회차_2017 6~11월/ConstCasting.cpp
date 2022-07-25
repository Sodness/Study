#include <iostream>
using namespace std;

void ShowString(char * str)
{
	cout << str << endl;
}

void ShowAddResult(int & n_1, int & n_2)
{
	cout << n_1 + n_2 << endl;
}

int main(void)
{
	const char * name = "Lee Sung Ju";
	ShowString(const_cast<char *>(name));

	const int & num_1 = 100;
	const int & num_2 = 200;

	ShowAddResult(const_cast<int &>(num_1), const_cast<int &>(num_2));

	return 0;
}