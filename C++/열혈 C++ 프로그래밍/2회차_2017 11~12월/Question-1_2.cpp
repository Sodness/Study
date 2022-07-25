#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x, int y)
		: xpos(x), ypos(y)
	{ }

	void ShowPointInfo() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
};

class Ring
{
private:
	int radius_in, radius_out;
	Point center_in, center_out;

public:
	Ring(int x_1, int y_1, int rad_1, int x_2, int y_2, int rad_2)
		: center_in(x_1, y_1), center_out(x_2, y_2), radius_in(rad_1), radius_out(rad_2)
	{ }

	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		cout << "radius: " << radius_in << endl;
		center_in.ShowPointInfo();

		cout << "Outter Circle Info..." << endl;
		cout << "radius: " << radius_out << endl;
		center_out.ShowPointInfo();
	}
};

int main(void)
{
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}