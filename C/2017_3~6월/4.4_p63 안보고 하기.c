#include <stdio.h>

int main()
{
	int num_1, num_2, result_1;
	float result_2;
	int choice;

	printf("Ã¹¹øÂ° ¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä ==> ");
	scanf_s("%d", &num_1);
	printf("µÎ¹øÂ° ¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä ==> ");
	scanf_s("%d", &num_2);

	printf("\n1.µ¡¼À 2.»¬¼À 3.°ö¼À 4.³ª´°¼À \n");
	printf("°è»êÇÒ ¹æ¹ýÀ» °í¸£¼¼¿ä : ");
	scanf_s("%d", &choice);

	if (choice == 1)
	{
		result_1 = num_1 + num_2;
		printf("\n%d + %d = %d \n", num_1, num_2, result_1);
	}

	if (choice == 2)
	{
		result_1 = num_1 - num_2;
		printf("\n%d - %d = %d \n", num_1, num_2, result_1);
	}

	if (choice == 3)
	{
		result_1 = num_1 * num_2;
		printf("\n%d * %d = %d \n \n", num_1, num_2, result_1);
	}

	if (choice == 4)
	{
		result_2 = (float) num_1 / (float) num_2;
		printf("\n%d / %d = %5.3f \n \n", num_1, num_2, result_2);
	}
	}