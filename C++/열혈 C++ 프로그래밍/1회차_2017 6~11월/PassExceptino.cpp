#include <iostream>
using namespace std;

void Divide(int num_1, int num_2)
{
	if (num_2 == 0)
		throw num_2;

	cout << "�������� ��: " << num_1 / num_2 << endl;
	cout << "�������� ������: " << num_1 % num_2 << endl << endl;
}

int main(void)
{
	int num_1, num_2;
	cout << "�� ���� ���� �Է�: ";
	cin >> num_1 >> num_2;

	try
	{
		Divide(num_1, num_2);
		cout << "�������� ���ƽ��ϴ�." << endl;
	}
	catch (int expn)
	{
		cout << "������ " << expn << "�� �� �� �����ϴ�." << endl;
		cout << "���α׷��� �ٽ� �����ϼ���." << endl;
	}

	return 0;
}