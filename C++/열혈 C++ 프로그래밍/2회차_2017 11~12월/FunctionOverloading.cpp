#include <iostream>
using namespace std;

void MyFunc(void);
void MyFunc(char c);
void MyFunc(int a, int b);

int main(void)
{
	char ch = NULL;
	int num_1 = 0, num_2 = 0;

	MyFunc();
	MyFunc(ch);
	MyFunc(num_1, num_2);
}

void MyFunc(void)
{
	cout << "MyFunc(void) called" << endl;
}

void MyFunc(char c)
{
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b) called" << endl;
}