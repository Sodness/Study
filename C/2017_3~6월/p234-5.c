#include <stdio.h>

int main()
{
	int i, k;
	i = 0;

	while (i < 3){
		k = 0;
		while (k < 4){
			printf("��ø while��\n");
			k++;
		}
		i++;
	}
}