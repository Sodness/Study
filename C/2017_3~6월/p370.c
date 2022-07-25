#include <stdio.h>

void main()
{
	int re_1, re_2;
	FILE *wfp;

	fopen_s(&wfp, "c:\\temp\\gugu.txt", "w");

	for (re_1 = 2; re_1 < 10; re_1++)
	{
		fprintf(wfp, " #Á¦%d´Ü#", re_1);
	}

	fprintf(wfp, "\n\n");

	for (re_1 = 1; re_1 < 10; re_1++)
	{
		for (re_2 = 2; re_2 < 10; re_2++)
		{
			fprintf(wfp, "%2dX%2d=%2d", re_2, re_1, re_1 * re_2);
		}
		fprintf(wfp, "\n");
	}

	fclose(wfp);
}