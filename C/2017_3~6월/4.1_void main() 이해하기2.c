#include <stdio.h>
float asdf(float a, float b) {
	return a + b;
}
int main()
{
	printf("%d \n", 100 + 100);
	printf("%4.2f \n", 10.22 + 10.22);
	printf("%s \n", "ABC");
	float c = asdf(1.2, 2.2);
	printf("%2.1f \n", c);
	
	return 0;
}