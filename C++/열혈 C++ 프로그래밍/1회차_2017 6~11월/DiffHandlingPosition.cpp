#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int StoI(char * str)
{
	int len = strlen(str);
	int num = 0;

	for (int i = 0; i < len; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			throw str[i];

		num += (int)(pow((double)10, (len - 1) - i) * (str[i] + (7 - '7')));
	}

	return num;
}

int main(void)
{
	char str_1[100];
	char str_2[200];

	while (1)
	{
		cout << "�� ���� ���� �Է�: ";
		cin >> str_1 >> str_2;

		try
		{
			cout << str_1 << " + " << str_2 << " = " << StoI(str_1) + StoI(str_2) << endl;
			break;
		}
		catch(char ch)
		{
			cout << "���� " << ch << "�� �ԷµǾ����ϴ�." << endl;
			cout << "���Է� �����մϴ�." << endl << endl;
		}
	}

	cout << "���α׷��� �����մϴ�." << endl;

	return 0;
}