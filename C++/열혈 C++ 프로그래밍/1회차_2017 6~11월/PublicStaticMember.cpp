#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;

	SoSimple()
	{
		simObjCnt++;
	}
};

int SoSimple::simObjCnt = 0;

int main(void)
{
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;

	SoSimple sim_1;
	SoSimple sim_2;

	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;

	cout << sim_1.simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim_2.simObjCnt << "��° SoSimple ��ü" << endl;

	return 0;
}