#include <iostream>
using namespace std;

void Plus_1(int &ref_1, int &ref_2);
void Change(int &ref_1, int &ref_2);

int main(void)
{
	int val_1 = 10;
	int val_2 = -20;

	Plus_1(val_1, val_2);
	cout << "val_1: " << val_1 << endl;
	cout << "val_2: " << val_2 << endl << endl;

	Change(val_1, val_2);
	cout << "val_1: " << val_1 << endl;
	cout << "val_2: " << val_2 << endl << endl;

	return 0;
}

void Plus_1(int &ref_1, int &ref_2)
{
	ref_1++;
	ref_2++;
}

void Change(int &ref_1, int &ref_2)
{
	ref_1 = -ref_1;
	ref_2 = -ref_2;
}