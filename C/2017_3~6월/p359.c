#include <stdio.h>

void main()
{
	char s[20];
	FILE *rfp;

	fopen_s(&rfp, "c:\\temp\\data1.txt", "r");
	
	fgets(s, 20, rfp);
	
	printf("파일에서 읽은 문자열 : ");
	puts(s);
	printf("\n");

	fclose(rfp);
}