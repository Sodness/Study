#include <stdio.h>

int main()
{
	int ary[10];
	int hap = 0;
	int re;

	re = 0;
	while (re < 10)
	{
		printf("%d��° ���ڸ� �Է��ϼ��� : ", re + 1);
		scanf_s("%d", &ary[re]);

		re++;
	}

	re = 0;
	while (re < 10)
	{
		hap = hap + ary[re];

		re++;
	}

	printf("\n�հ� ==> %d \n\n", hap);
}