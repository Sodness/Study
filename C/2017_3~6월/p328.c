#include <stdio.h>

void func1()
{
	printf("void �� �Լ��� �����ٰ� ����.\n");
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

	printf("int �� �Լ����� ������ �� ==> %d\n\n", num);
}