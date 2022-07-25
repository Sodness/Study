#include <stdio.h>

void main()
{
	float *p;
	int cnt, re;
	float sum = 0, mtp = 1;

	printf(" 입력할 개수는 ? ");
	scanf_s("%d", &cnt);

	p = (float*)malloc(sizeof(float) * cnt);
	
	printf("\n");

	for (re = 0; re < cnt; re++)
	{
		printf("%d 번재 숫자 : ", re + 1);
		scanf_s("%f", p + re);
		
		sum = sum + *(p + re);
		mtp = mtp * *(p + re);
	}

	printf("\n입력 숫자 합 ==> %f \n", sum);
	printf("입력 숫자 곱 ==> %f \n\n", mtp);
}