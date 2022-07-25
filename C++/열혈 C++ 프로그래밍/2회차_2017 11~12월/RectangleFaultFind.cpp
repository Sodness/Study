#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main(void)
{
	Point pos_1;
	if (!pos_1.InitMembers(-2, 4))
		cout << "초기화 실패" << endl;
	if (!pos_1.InitMembers(2, 4))
		cout << "초기화 실패" << endl;

	Point pos_2;
	if (!pos_2.InitMembers(5, 9))
		cout << "초기화 실패" << endl;

	Rectangle rec;
	if (!rec.InitMembers(pos_2, pos_1))
		cout << "직사각형 초기화 실패" << endl;
	if (!rec.InitMembers(pos_1, pos_2))
		cout << "직사각형 초기화 실패" << endl;

	rec.ShowRecInfo();

	return 0;
}