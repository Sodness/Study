#include <stdio.h>

int main()
{
	union emp {
		char a;
		int b;
		double c;
		long d;
	}t;

	printf("공용체 크기 ==> %d\n\n", sizeof(union emp));

	printf("%d\n", sizeof(t.c));
	printf("%d\n\n", sizeof(t.d));
}