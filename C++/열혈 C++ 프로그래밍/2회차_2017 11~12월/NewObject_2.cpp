#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple
{
public:
	Simple()
	{
		cout << "I am SimpleFunc()!!" << endl;
	}
};

int main(void)
{
	cout << "case1 : ";
	Simple * sp_1 = new Simple;

	cout << "case2 : ";
	Simple * sp_2 = (Simple *)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl << endl;

	delete sp_1;
	free(sp_2);

	return 0;
}