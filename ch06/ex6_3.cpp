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
	std::cout << "输入一个整数： " << std::endl;
	int num = 0;
	std::cin >> num;
	std::cout << "阶乘结果： " << fact(num) << std::endl;
	return 0;
}
