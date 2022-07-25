#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
	char str[20];
public:
	void SetString(char *str_1);
	void ShowString();
};

void Printer::SetString(char *str_1)
{
	strcpy_s(str, 20, str_1);
	return;
}

void Printer::ShowString()
{
	cout << str << endl;
	return;
}

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}