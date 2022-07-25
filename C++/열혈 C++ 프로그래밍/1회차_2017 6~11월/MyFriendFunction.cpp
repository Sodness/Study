#include <iostream>
using namespace std;

class Point;							// Point 가 클래스의 이름임을 선언

class PointOP
{
private:
	int opcnt;

public:
	PointOP() : opcnt(0)
	{ }

	Point PointAdd(const Point &, const Point &);

	Point PointSub(const Point &, const Point &);

	~PointOP()
	{
		cout << "Operation times: " << opcnt << endl;
	}
};

class Point
{
private:
	int x;
	int y;

public:
	Point (const int &xpos, const int &ypos) : x(xpos), y(ypos)
	{ }

	friend Point PointOP::PointAdd(const Point &, const Point &);

	friend Point PointOP::PointSub(const Point &, const Point &);

	friend void ShowPointPos(const Point &);
};

Point PointOP::PointAdd(const Point & pnt_1, const Point & pnt_2)
{
	opcnt++;
	return Point(pnt_1.x + pnt_2.x, pnt_1.y + pnt_2.y);
}

Point PointOP::PointSub(const Point & pnt_1, const Point & pnt_2)
{
	opcnt++;
	return Point(pnt_1.x - pnt_2.x, pnt_1.y, pnt_2);
}

int main(void)
{
	Point pos_1(1, 2);
	Point pos_2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos_1, pos_2));
	ShowPointPos(op.PointSub(pos_2, pos_1));

	return 0;
}

void ShowPointPos(const Point & pos)
{
	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}