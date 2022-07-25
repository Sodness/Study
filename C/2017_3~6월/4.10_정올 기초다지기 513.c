#include <stdio.h>

int main()
{
	float num_1, num_2;

	printf("¼·¾¾ => ");
	scanf_s("%f", &num_1);

	printf("È­¾¾ => ");
	scanf_s("%f", &num_2);

	printf("\n¼·¾¾ %.1fµµ´Â È­¾¾ %.1fµµÀÌ´Ù. \n", num_1, (num_1 * 1.8) + 32);
	printf("È­¾¾ %.1fµµ´Â ¼·¾¾ %.1fµµÀÌ´Ù. \n\n", num_2, (num_2 - 32) * 0.55);
}