#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{ }

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	friend Point operator+(const Point & pos_1, const Point & pos_2);
};

Point operator+(const Point & pos_1, const Point & pos_2)
{
	Point pos(pos_1.xpos + pos_2.xpos, pos_1.ypos + pos_2.ypos);
	return pos;
}

int main(void)
{
	Point pos_1(3, 4);
	Point pos_2(10, 20);

	Point pos_3 = pos_1 + pos_2;

	pos_1.ShowPosition();
	pos_2.ShowPosition();
	pos_3.ShowPosition();

	return 0;
}