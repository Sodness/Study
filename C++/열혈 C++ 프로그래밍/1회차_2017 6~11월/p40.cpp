#include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void);
}

namespace ProgComImp1
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImp1::SimpleFunc();
	ProgComImp1::SimpleFunc();
	return 0;
}

Void BestComImp1::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

Void ProgComImp1::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
