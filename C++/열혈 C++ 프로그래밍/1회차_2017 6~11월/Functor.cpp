#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }

	Point operator+ (const Point & pos) const
	{
		return Point(xpos + pos.xpos, ypos + pos.ypos);
	}

	friend ostream & operator<< (ostream & os, const Point & pos);
};

ostream & operator<< (ostream & os, const Point & pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

class Adder
{
public:
	int operator() (const int & n_1, const int & n_2)
	{
		return n_1 + n_2;
	}

	double operator() (const double & e_1, const double & e_2)
	{
		return e_1 + e_2;
	}

	Point operator() (const Point & pos_1, const Point & pos_2)
	{
		return pos_1 + pos_2;
	}
};

int main(void)
{
	Adder adder;

	cout << adder(1, 3) << endl;
	cout << adder(1.5, 3.7) << endl;
	cout << adder(Point(3, 4), Point(7, 9));

	return 0;
}