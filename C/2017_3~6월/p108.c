#include <stdio.h>

void main()
{
	int num, choice;

	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
	scanf_s("%d", &choice);

	printf("\n");

	if (choice == 1)
	{
		printf("값 입력 : ");
		scanf_s("%d", &num);
	}
	if (choice == 2)
	{
		printf("값 입력 : ");
		scanf_s("%x", &num);
	}
	if (choice == 3)
	{
		printf("값 입력 : ");
		scanf_s("%o", &num);
	}

	printf("\n");

	printf("10진수 ==> %d \n", num);
	printf("16진수 ==> %x \n", num);
	printf("8진수 ==> %o \n\n", num);
}