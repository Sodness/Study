#include <stdio.h>

void main()
{
	FILE *rfp, *wfp;
	int re;
	char str[30];

	fopen_s(&rfp, "c:\\windows\\win.ini", "r");
	fopen_s(&wfp, "c:\\temp\\win2.ini.txt", "w");
	
	for (re = 0; re < 3; re++)
	{
		fprintf(wfp, "%dÇà", re + 1);

		fgets(str, 30, rfp);
		fprintf(wfp, "%s", str);
	}

	fclose(rfp);
}