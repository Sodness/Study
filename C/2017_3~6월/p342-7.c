#include <stdio.h>

int func(char ch_1, char ch_2)
{
	int diff;

	if (ch_1 > ch_2)
		diff = ch_1 - ch_2;
	else
		diff = ch_2 - ch_1;

	return diff;
}

int main()
{
	char ch_1, ch_2;
	int diff;

	printf("�� ���ڸ� �Է� : ");
	scanf_s(" %c %c", &ch_1, 1, &ch_2, 1);

	diff = func(ch_1, ch_2);

	printf("�� ������ ���� ==> %d \n\n", diff);
}