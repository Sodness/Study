#include <stdio.h>

void func1()
{
	printf("void 형 함수는 돌려줄게 없음.\n");
}

int func2()
{
	return 100;
}

int main()
{
	int num;
	
	func1();
	num = func2();

	printf("int 형 함수에서 돌려준 값 ==> %d\n\n", num);
}