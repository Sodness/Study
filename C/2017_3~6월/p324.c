#include <stdio.h>

int num = 100;

void func1()
{
	int num = 200;
	printf("func1( )에서 num의 값 ==> %d\n", num);
}

int main()
{
	func1();
	printf("main( ) 에서 num의 값 ==> %d\n\n", num);
}