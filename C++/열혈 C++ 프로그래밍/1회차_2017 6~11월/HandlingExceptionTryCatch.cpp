#include <iostream>
using namespace std;

int main(void)
{
	int num_1, num_2;
	cout << "�� ���� ���� �Է�: ";
	cin >> num_1 >> num_2;

	try
	{
		if (num_2 == 0)
			throw num_2;
		cout << "�������� ��: " << num_1 / num_2 << endl;
		cout << "�������� ������: " << num_1 % num_2 << endl << endl;
	}
	catch(int expn)
	{
		cout << "������ " << expn << "�� �� �� �����ϴ�." << endl;
		cout << "���α׷��� �ٽ� �����ϼ���." << endl << endl;
	}

	cout << "end of main" << endl << endl;

	return 0;
}