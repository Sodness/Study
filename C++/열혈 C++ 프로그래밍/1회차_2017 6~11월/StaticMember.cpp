#include <iostream>
using namespace std;

class SoSimple
{
private:
	static int simObjCnt;

public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	}
};

int SoSimple::simObjCnt = 0;

class SoComplex
{
private:
	static int cmxObjCnt;

public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "¹øÂ° SoComplex °´Ã¼" << endl;
	}

	SoComplex(SoComplex & copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "¹øÂ° SoComplex °´Ã¼" << endl;
	}
};

int SoComplex::cmxObjCnt = 0;

int main(void)
{
	SoSimple sim_1;
	SoSimple sim_2;

	SoComplex cmx_1;
	SoComplex cmx_2 = cmx_1;
	SoComplex();

	return 0;
}