#include <stdio.h>

int main()
{
	int a = 0x41, b = 0x61;

	int to1;

	to1 = b - a;
	
	printf("%c�� �ҹ��ڷ� ǥ���ϸ� %c�̸� \n", 'K', 'K' + to1);
	printf("%c�� �빮�ڷ� ǥ���ϸ� %c�̸� \n", 'z', 'z' - to1);
}