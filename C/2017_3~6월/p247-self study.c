#include <stdio.h>

int main()
{
	int ary[] = { 10, 20, 30, 40, 50 };
	int cnt;
	int re, hap = 0;

	cnt = sizeof(ary) / sizeof(int);

	printf("�迭 ary[]�� ����� ������ %d �Դϴ�. \n\n", cnt);

	for (re = 0; re < cnt; re++)
	{
		hap = hap + ary[re];
	}

	printf("ary�� ��� �ִ� ��ü ���� �� ==> %d \n\n", hap);
}