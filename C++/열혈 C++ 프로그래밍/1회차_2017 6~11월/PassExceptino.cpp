#include <iostream>
using namespace std;

void Divide(int num_1, int num_2)
{
	if (num_2 == 0)
		throw num_2;

	cout << "나눗셈의 몫: " << num_1 / num_2 << endl;
	cout << "나눗셈의 나머지: " << num_1 % num_2 << endl << endl;
}

int main(void)
{
	int num_1, num_2;
	cout << "두 개의 숫자 입력: ";
	cin >> num_1 >> num_2;

	try
	{
		Divide(num_1, num_2);
		cout << "나눗셈을 마쳤습니다." << endl;
	}
	catch (int expn)
	{
		cout << "제수는 " << expn << "이 될 수 없습니다." << endl;
		cout << "프로그램을 다시 실행하세요." << endl;
	}

	return 0;
}