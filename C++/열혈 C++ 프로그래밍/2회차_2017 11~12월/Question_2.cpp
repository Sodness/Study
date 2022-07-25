#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}

	void ShowPointInfo() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
};

class Ring
{
private:
	int in_xpos, in_ypos, in_radius;
	int out_xpos, out_ypos, out_radius;

public:
	void Init(int a, int b, int c, int d, int e, int f)
	{
		in_xpos = a;
		in_ypos = b;
		in_radius = c;
		out_xpos = d;
		out_ypos = e;
		out_radius = f;
	}

	void ShowRingInfo()
	{
		cout << "Inner Circle Info..." << endl;
		cout << "radius: " << in_radius << endl;
		cout << '[' << in_xpos << ", " << in_ypos << ']' << endl << endl;

		cout << "Outter Circle Info..." << endl;
		cout << "radius: " << out_radius << endl;
		cout << '[' << out_xpos << ", " << out_ypos << ']' << endl << endl;
	}
};

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}