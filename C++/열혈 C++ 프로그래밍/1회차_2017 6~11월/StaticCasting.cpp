#include <iostream>
using namespace std;

class Car
{
private:
	int fuelGauge;

public:
	Car(int fuel) : fuelGauge(fuel) { }

	void ShowCarState() { cout << "잔여 연료량: " << fuelGauge << endl; }
};

class Truck : public Car
{
private:
	int freightWeight;

public:
	Truck(int fuel, int weight)
		: Car(fuel), freightWeight(weight)
	{ }

	void ShowTruckState()
	{
		ShowCarState();
		cout << "화물의 무게: " << freightWeight << endl;
	}
};

int main(void)
{
	Car * pcar_1 = new Truck(80, 200);
	Truck * ptruck_1 = static_cast<Truck *>(pcar_1);
	ptruck_1->ShowTruckState();

	cout << endl;

	Car * pcar_2 = new Car(120);
	Truck * ptruck_2 = static_cast<Truck *>(pcar_2);
	ptruck_2->ShowTruckState();

	return 0;
}