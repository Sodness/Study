#include <stdio.h>

void main()
{
	float *p;
	int cnt, re;
	float sum = 0, mtp = 1;

	printf(" �Է��� ������ ? ");
	scanf_s("%d", &cnt);

	p = (float*)malloc(sizeof(float) * cnt);
	
	printf("\n");

	for (re = 0; re < cnt; re++)
	{
		printf("%d ���� ���� : ", re + 1);
		scanf_s("%f", p + re);
		
		sum = sum + *(p + re);
		mtp = mtp * *(p + re);
	}

	printf("\n�Է� ���� �� ==> %f \n", sum);
	printf("�Է� ���� �� ==> %f \n\n", mtp);
}