#include <iostream>

long long fact(int val)
{
	long long sum = 1;
	for(;val > 0; --val)
	{
		sum *= val;
	}
	return sum;
}

int main()
{
	std::cout << "����һ�������� " << std::endl;
	int num = 0;
	std::cin >> num;
	std::cout << "�׳˽���� " << fact(num) << std::endl;
	return 0;
}
