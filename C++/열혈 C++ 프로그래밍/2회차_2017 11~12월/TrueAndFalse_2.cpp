#include <iostream>

using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "True: " << true << endl;
	cout << "False: " << false << endl;

	while (true)
	{
		cout << i++ << ' ';
		if (i > num)
			break;
	}
	cout << endl;

	cout << "Sizeof 1: " << sizeof(1) << endl;
	cout << "Sizeof 0: " << sizeof(0) << endl;
	cout << "Sizeof true: " << sizeof(true) << endl;
	cout << "Sizeof false: " << sizeof(false) << endl << endl;

	return 0;
}