#include <stdio.h>
#include <string.h>

int main()
{
	char str[4];

	strcpy_s(str, 4,"XYZ");

	printf("���ڿ� str�� ���� ==> %s \n", str);
}