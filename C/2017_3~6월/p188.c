#include <stdio.h>

int main()
{
	int re, sum = 0;
	int num_1, num_2, num_3;

	printf("���۰�, ����, ������ �Է� : ");
	scanf_s("%d %d %d", &num_1, &num_2, &num_3);

	for (re = num_1; re <= num_2; re = re + num_3)
		sum = sum + re;

	printf("%d���� %d���� %d�� ������ ���� ��: %d \n\n", num_1, num_2, num_3, sum);
}