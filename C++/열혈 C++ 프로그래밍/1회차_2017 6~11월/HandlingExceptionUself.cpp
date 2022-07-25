#include <iostream>
using namespace std;

int main(void)
{
	int num_1, num_2;
	cout << "두 개의 숫자 입력: ";
	cin >> num_1 >> num_2;

	if (num_2 == 0)
	{
		cout << "제수는 0이 될 수 없습니다." << endl;
		cout << "프로그램을 다시 실행하세요." << endl;
	}
	else
	{
		cout << "나눗셈의 몫: " << num_1 / num_2 << endl;
		cout << "나눗셈의 나머지: " << num_1 % num_2 << endl << endl;
	}

	return 0;
}