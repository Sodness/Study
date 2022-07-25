#include <stdio.h>

int main()
{
	int year;

	printf("Ãâ»ý³âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf_s("%d", &year);

	if (year % 12 == 0)
		printf("¿ø¼þÀÌ¶ì\n");
	else
		if (year % 12 == 1)
			printf("´ß¶ì\n");
		else
			if (year % 12 == 2)
				printf("°³¶ì\n");
			else
				if (year % 12 == 3)
					printf("µÅÁö¶ì\n");
				else
					if (year % 12 == 4)
						printf("Áã¶ì\n");
					else
						if (year % 12 == 5)
							printf("¼Ò¶ì\n");
						else
							if (year % 12 == 6)
								printf("È£¶ûÀÌ¶ì\n");
							else
								if (year % 12 == 7)
									printf("Åä³¢¶ì\n");
								else
									if (year % 12 == 8)
										printf("¿ë¶ì\n");
									else
										if (year % 12 == 9)
											printf("¹ì¶ì\n");
										else
											if (year % 12 == 10)
												printf("¸»¶ì\n");
											else
													printf("¾ç¶ì\n");

}