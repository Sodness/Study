#include <stdio.h>

int main()
{
	FILE *rfp;
	int hap = 0;
	int in, re;

	fopen_s(&rfp, "c:\\temp\\data2.txt", "r");

	for (re = 0; re < 5; re++)
	{
		fscanf_s(rfp, "%d", &in);
		hap = hap + in;
	}

	printf("гу╟Х ==> %d \n\n", hap);

	fclose(rfp);
}