#include <stdio.h>

int num = 100;

void func1()
{
	int num = 200;
	printf("func1( )���� num�� �� ==> %d\n", num);
}

int main()
{
	func1();
	printf("main( ) ���� num�� �� ==> %d\n\n", num);
}