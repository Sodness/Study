#include <stdio.h>

int main()
{
	int menu;

	printf("\n�մ� �ֹ��Ͻðڽ��ϱ� ? \n");
	printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�׸���ų���� ==> ");
	scanf_s("%d", &menu);

	if (menu == 1)
	printf("#ī��� �ֹ��ϼ̽��ϴ�. \n");
	else if (menu ==2)
	printf("#īǪġ�� �ֹ��ϼ̽��ϴ�. \n");
	else if (menu == 3)
	printf("#�Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�. \n");
	else if (menu == 4)
	printf("#�ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�. \n");
	else
	printf("�߸� �ֹ��ϼ̽��ϴ�. \n");
}