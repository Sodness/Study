#include <stdio.h>
#include <string.h>

int main()
{
	int num[4];
	int re;

	re = 0;
	while (re < 4)
	{
		printf("%d��° ���ڸ� �Է��ϼ��� : ", re + 1);
		scanf_s("%d", &num[re]);

		re++;
	}
	printf("\n");

	printf(" �հ� ==> %d \n", num[0] + num[1] + num[2] + num[3]);
	printf(" ���� ==> %d \n\n", num[0] * num[1] * num[2] * num[3]);
}