#include <iostream>
using namespace std;

int main(void)
{
	int num_1, num_2;
	cout << "�� ���� ���� �Է�: ";
	cin >> num_1 >> num_2;

	if (num_2 == 0)
	{
		cout << "������ 0�� �� �� �����ϴ�." << endl;
		cout << "���α׷��� �ٽ� �����ϼ���." << endl;
	}
	else
	{
		cout << "�������� ��: " << num_1 / num_2 << endl;
		cout << "�������� ������: " << num_1 % num_2 << endl << endl;
	}

	return 0;
}