#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:
	T xpos, ypos;

public:
	Point(T x = 0, T y = 0) : xpos(x), ypos(y) { }

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	friend Point<int> operator + (const Point<int> &, const Point<int> &);
	friend ostream & operator << (ostream & os, const Point<int> & pos);
};

Point<int> operator + (const Point<int> & pos_1, const Point<int> & pos_2)
{
	return Point<int>(pos_1.xpos + pos_2.xpos, pos_1.ypos + pos_2.ypos);
}

ostream & operator << (ostream & os, const Point<int> & pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

int main(void)
{
	Point<int> pos_1(2, 4);
	Point<int> pos_2(4, 8);

	Point<int> pos_3 = pos_1 + pos_2;

	cout << pos_1 << pos_2 << pos_3;

	return 0;
}

