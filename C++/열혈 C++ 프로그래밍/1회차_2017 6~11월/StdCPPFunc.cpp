#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
	char str_1[] = "Result";
	char str_2[30];

	strcpy(str_2, str_1);

	printf("%s: %f \n", str_1, sin(0.14));
	printf("%s: %f \n\n", str_2, abs(-1.25));

	return 0;
}