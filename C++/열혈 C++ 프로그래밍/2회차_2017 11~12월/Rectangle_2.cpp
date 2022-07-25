#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(const int &x_1, const int &y_1, const int &x_2, const int &y_2)
	:upLeft(x_1, y_1), lowRight(x_2, y_2)
{ }

void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단: " << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;

	cout << "우 하단: " << '[' << lowRight.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl << endl;
}