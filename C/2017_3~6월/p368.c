#include <stdio.h>

void main()
{
	FILE *wfp;
	int num[5];
	int re, hap = 0;

	fopen_s(&wfp, "c:\\temp\\data7.txt", "w");

	for (re = 0; re < 5; re++)
	{
		printf(" 숫자 %d : ", re + 1);
		scanf_s("%d", &num[re]);

		hap = hap + num[re];
	}

	fprintf(wfp, "합계 ==> : %d", hap);

	fclose(wfp);
}