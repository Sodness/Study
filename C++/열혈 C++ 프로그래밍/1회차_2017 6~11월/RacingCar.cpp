#include <iostream>
using namespace std;

#define ID_LEN		20
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car
{
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeeed;
};

void ShowCarState(const Car &car)
{
	cout << "������ID: " << car.gamerID << endl;
	cout << "���ᷮ: " << car.fuelGauge << "%" << endl;
	cout << "����ӵ�: " << car.curSpeeed << "km/s" << endl << endl;
}

void Accel(Car &car)
{
	if (car.fuelGauge <= 0)
	{
		cout << "1, " << car.curSpeeed << endl;
		return;
	}
	else
	{
		car.fuelGauge -= FUEL_STEP;
		cout << "2, " << car.curSpeeed << endl;
	}

	if ((car.curSpeeed += ACC_STEP) >= MAX_SPD)	    	// if (car.curSpeeed += ACC_STEP >= MAX_SPD) �Ǽ��� �̷��� �ߴµ� ������� ���ذ� �ȉ�
													    // �ϴ� ������ �켱������ if (��������) �� �Ǽ� 200�� ����Ű� ()�� ��ĥ �� �ִ�.
	{
		cout << "3, " << car.curSpeeed << endl;
		car.curSpeeed = MAX_SPD;
		return;
	}

	int a = (car.curSpeeed += ACC_STEP);                // �򰥸� �� �ִ� �κ��� 0 + 10 = 10 �� ������ �� �ִµ� 37�࿡�� 0 + 10 �� �ϰ� 45�࿡�� 10 + 10 �� �ϰ��ִ�.
	cout << "4, " << car.curSpeeed << ", " << a << endl;
}

void Break(Car &car)
{
	if (car.curSpeeed < BRK_STEP)
	{
		car.curSpeeed = 0;
		return;
	}

	car.curSpeeed -= BRK_STEP;
}

int main(void)
{
	Car run99 = { "run99", 100, 0 };
	Accel(run99);
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);

	Car sped77 = { "sped77", 100, 0 };
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);

	return 0;
}