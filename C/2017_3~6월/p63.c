#include <stdio.h>

void main()
{
	int num_1, num_2;
	int ccl;

	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &num_1);

	printf("<1>���� <2>���� <3>���� <4>������ ==> ");
	scanf_s("%d", &ccl);

	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &num_2);

	printf("\n");

	if (ccl == 1)
		printf(" %d + %d = %d", num_1, num_2, num_1 + num_2);
	if (ccl == 2)
		printf(" %d - %d = %d", num_1, num_2, num_1 - num_2);
	if (ccl == 3)
		printf(" %d * %d = %d", num_1, num_2, num_1 * num_2);
	if (ccl == 4)
		printf(" %d / %d = %d", num_1, num_2, num_1 / num_2);

	printf("\n\n");
}