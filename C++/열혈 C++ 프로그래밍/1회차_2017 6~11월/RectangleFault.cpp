#include <iostream>
using namespace std;

class Point
{
public:
	int x;
	int y;
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout << "�� ���: " << '[' << upLeft.x << ", ";
		cout << upLeft.y << ']' << endl;
		cout << "�� �ϴ�: " << '[' << lowRight.x << ", ";
		cout << lowRight.y << ']' << endl << endl;
	}
};

int main(void)
{
	Point pos_1 = { -2, 4 };
	Point pos_2 = { 5, 9 };

	Rectangle rec = { pos_2, pos_1 };

	rec.ShowRecInfo();

	return 0;
}