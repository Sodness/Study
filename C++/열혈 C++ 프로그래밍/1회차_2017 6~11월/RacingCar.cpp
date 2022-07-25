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
	cout << "소유자ID: " << car.gamerID << endl;
	cout << "연료량: " << car.fuelGauge << "%" << endl;
	cout << "현재속도: " << car.curSpeeed << "km/s" << endl << endl;
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

	if ((car.curSpeeed += ACC_STEP) >= MAX_SPD)	    	// if (car.curSpeeed += ACC_STEP >= MAX_SPD) 실수로 이렇게 했는데 결과값이 이해가 안됌
													    // 일단 연산자 우선순위로 if (양의정수) 가 되서 200이 됬던거고 ()로 고칠 수 있다.
	{
		cout << "3, " << car.curSpeeed << endl;
		car.curSpeeed = MAX_SPD;
		return;
	}

	int a = (car.curSpeeed += ACC_STEP);                // 헷갈릴 수 있는 부분이 0 + 10 = 10 로 생각할 수 있는데 37행에서 0 + 10 을 하고 45행에서 10 + 10 을 하고있다.
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