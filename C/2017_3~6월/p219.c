#include <stdio.h>

int main()
{
	int num;

	do
	{
		printf("�մ� �ֹ��Ͻðڽ��ϱ� ? \n");
		printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�׸���ų���� ==> ");
		scanf_s("%d", &num);

		switch (num)
		{
		case 1: printf("#ī��� �ֹ��ϼ̽��ϴ�. \n\n"); break;
		case 2: printf("#īǪġ�� �ֹ��ϼ̽��ϴ�. \n\n"); break;
		case 3: printf("#�Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�. \n\n"); break;
		case 4: printf("�ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�. \n\n"); break;
		default: printf("�߸� �ֹ��ϼ̽��ϴ�. \n\n"); break;
		}
	} while (num != 4);
}