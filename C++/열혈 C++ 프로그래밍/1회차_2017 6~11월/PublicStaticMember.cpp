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
	cout << SoSimple::simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;

	SoSimple sim_1;
	SoSimple sim_2;

	cout << SoSimple::simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;

	cout << sim_1.simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	cout << sim_2.simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;

	return 0;
}