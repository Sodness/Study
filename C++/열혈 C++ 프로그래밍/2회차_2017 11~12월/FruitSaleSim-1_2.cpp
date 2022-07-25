#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int NumOfApples;
	int MyMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		NumOfApples = num;
		MyMoney = money;
	}

	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		NumOfApples -= num;
		MyMoney += money;
		return num;
	}

	void ShowSalesResult()
	{
		cout << "���� ���: " << NumOfApples << endl;
		cout << "�Ǹ� ����: " << MyMoney << endl << endl;
	}
};

class FruitBuyer
{
private:
	int MyMoney;
	int NumOfApples;

public:
	void InitMembers(int money)
	{
		MyMoney = money;
		NumOfApples = 0;
	}

	void BuyApples(FruitSeller &seller, int money)
	{
		NumOfApples += seller.SaleApples(money);
		MyMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "���� �ܾ�: " << MyMoney << endl;
		cout << "��� ����: " << NumOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);

	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();

	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;
}