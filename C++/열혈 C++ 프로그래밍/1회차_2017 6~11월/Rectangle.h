#pragma once
#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "Point.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;

public:
	Rectangle(const int &x_1, const int &y_1, const int &x_2, const int &y_2);
	void ShowRecInfo() const;
};

#endif // !__RECTANGLE_H_
