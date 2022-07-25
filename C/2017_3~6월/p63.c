#include <stdio.h>

void main()
{
	int num_1, num_2;
	int ccl;

	printf("Ã¹¹øÂ° °è»êÇÒ °ªÀ» ÀÔ·ÂÇÏ¼¼¿ä ==> ");
	scanf_s("%d", &num_1);

	printf("<1>µ¡¼À <2>»¬¼À <3>°ö¼À <4>³ª´°¼À ==> ");
	scanf_s("%d", &ccl);

	printf("µÎ¹øÂ° °è»êÇÒ °ªÀ» ÀÔ·ÂÇÏ¼¼¿ä ==> ");
	scanf_s("%d", &num_2);

	printf("\n");

	if (ccl == 1)
		printf(" %d + %d = %d", num_1, num_2, num_1 + num_2);
	if (ccl == 2)
		printf(" %d - %d = %d", num_1, num_2, num_1 - num_2);
	if (ccl == 3)
		printf(" %d * %d = %d", num_1, num_2, num_1 * num_2);
	if (ccl == 4)
		printf(" %d / %d = %d", num_1, num_2, num_1 / num_2);

	printf("\n\n");
}