#include <stdio.h>
#include <string.h>

void main()
{
	FILE *wfp, *rfp;
	char in[30];
	int re, cnt;

	fopen_s(&wfp, "c:\\temp\\out.txt", "w");
	fopen_s(&rfp, "c:\\temp\\in.txt", "r");

	for (; ; )
	{
		fgets(in, 30, rfp);

		if (feof(rfp))
			break;

		cnt = strlen(in);

		for (re = cnt - 2; re >= 0; re--)
		{
			fprintf(wfp, "%c", in[re]);
			in[cnt - 1] = '\0';
		}

		fprintf(wfp, "\n");
	}

	fclose(wfp);
	fclose(rfp);
}