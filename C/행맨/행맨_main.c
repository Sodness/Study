#include <stdio.h>
#include <string.h>

void main()
{
	char str[30], str_1[30];
	int len, num = 0;
	char ch;
	int re_1, re_3;

	for (int re_5 = 0; re_5 < 30; re_5++)
		str_1[re_5] = '*';

	printf("Let me know your word (+ at the last) ==> ");
	for (re_3 = 0; ;re_3++) {
		str[re_3] = getch();

		if (str[re_3] == '+')
			break;
		else
			printf("*");
	}

	str[re_3] = '\0';
	len = strlen(str);

	printf("\nOk I got it, Let's start a game \n\n");

	while (1) 
	{
		printf("Give me an alphabet : ");
		scanf_s(" %c", &ch, 1);

		for (re_1 = 0; re_1 < len; re_1++) 
		{
			if (ch == str[re_1]) 
			{
				str_1[re_1] = ch;
			}
			else 
			{
				num++;
			}
		}

		if (num == len)
		printf("# \n");
		else
		{
			str_1[len] = '\0';
			printf("%s \n", str_1);
		}

		if (strncmp(str, str_1, len) == 0)
		{
			printf("\nYou Win!! \n\n");
			break;
		}

		num = 0;
		re_1 = 0;
		printf("\n");
	}
}