#include <stdio.h>

void main()
{
	int num, choice;

	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
	scanf_s("%d", &choice);

	printf("\n");

	if (choice == 1)
	{
		printf("�� �Է� : ");
		scanf_s("%d", &num);
	}
	if (choice == 2)
	{
		printf("�� �Է� : ");
		scanf_s("%x", &num);
	}
	if (choice == 3)
	{
		printf("�� �Է� : ");
		scanf_s("%o", &num);
	}

	printf("\n");

	printf("10���� ==> %d \n", num);
	printf("16���� ==> %x \n", num);
	printf("8���� ==> %o \n\n", num);
}