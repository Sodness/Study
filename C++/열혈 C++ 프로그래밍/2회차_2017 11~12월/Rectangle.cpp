#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr)
{
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
	{
		cout << "�߸��� ��ġ���� ����" << endl;
		return false;
	}

	UpLeft = ul;
	LowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout << "�� ���: " << '[' << UpLeft.GetX() << ", ";
	cout << UpLeft.GetY() << ']' << endl;

	cout << "�� �ϴ�: " << '[' << LowRight.GetX() << ", ";
	cout << LowRight.GetY() << ']' << endl << endl;
}