#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int StoI(char * str)
{
	int len = strlen(str);
	int num = 0;

	cout << "뚜시뚜시" << endl;

	if (len != 0 && str[0] == '0')
		throw 0;

	for (int i = 0; i < len; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			cout << i + 1 << "번" << endl;
			throw str[i];
		}

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
		cout << "두 개의 숫자 입력: ";
		cin >> str_1 >> str_2;

		try
		{
			cout << str_1 << " + " << str_2 << " = " << StoI(str_1) + StoI(str_2) << endl;
			break;
		}
		catch(char ch)
		{
			cout << "문자 " << ch << "가 입력되었습니다." << endl;
			cout << "재입력 진행합니다." << endl << endl;
		}
		catch (int expn)
		{
			if (expn == 0)
				cout << "0으로 시작하는 숫자는 입력불가." << endl;
			else
				cout << "비정상적 입력이 이루어졌습니다." << endl;

			cout << "재입력 진행합니다." << endl << endl;
		}
	}
	
	cout << "프로그램을 종료합니다." << endl << endl;

	return 0;
}