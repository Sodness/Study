#include <stdio.h>

int main()
{
	enum week {sun, mon, tue, wed, thu, fri, sat};

	enum week ww;

	ww = sat;

	if (ww == sun)
		printf("������ �Ͽ����Դϴ�. \n\n");
	else
		printf("������ �Ͽ����� �ƴմϴ�. \n\n");
}