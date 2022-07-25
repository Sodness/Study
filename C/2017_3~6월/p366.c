#include <stdio.h>

void main()
{
	char str[200];
	FILE *rfp;
	FILE *wfp;

	fopen_s(&rfp, "c:\\windows\\win.ini", "r");
	fopen_s(&wfp, "c:\\temp\\data5.txt", "w");

	for (; ; )
	{
		fgets(str, 200, rfp);

		if (feof(rfp))
			break;

		fputs(str, wfp);
	}

	fclose(rfp);
	fclose(wfp);
}