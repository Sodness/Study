#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str_1 = "I like ";
	string str_2 = "string class";
	string str_3 = str_1 + str_2;

	cout << str_1 << endl;
	cout << str_2 << endl;
	cout << str_3 << endl;

	str_1 += str_2;

	if (str_1 == str_3)
		cout << "���� ���ڿ�!" << endl;
	else
		cout << "�������� ���� ���ڿ�!" << endl;

	string str_4;

	cout << "���ڿ� �Է�: ";
	cin >> str_4;

	cout << "�Է��� ���ڿ�: " << str_4 << endl;

	return 0;
}