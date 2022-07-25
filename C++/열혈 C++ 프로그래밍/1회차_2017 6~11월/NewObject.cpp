#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple
{
public:
	Simple()
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "cas 1: ";
	Simple *sp1 = new Simple;

	cout << "cas 2: ";
	Simple *sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl << endl;

	delete sp1;
	free(sp2);

	return 0;
}