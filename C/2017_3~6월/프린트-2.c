#include <stdio.h>

int main()
{
	int numArr[5];
	int smallestNumber;

	scanf_s("%d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);

	if (numArr[0] < numArr[1])
		smallestNumber = numArr[0];
	
	else if (numArr[1] < numArr[2]) 
		smallestNumber = numArr[1];
	
	else if (numArr[2] < numArr[3]) 
		smallestNumber = numArr[2];
	
	else if (numArr[3] < numArr[4]) 
		smallestNumber = numArr[3];
	
	else smallestNumber = numArr[4];

	printf("%d \n\n", smallestNumber);

	return 0;
}