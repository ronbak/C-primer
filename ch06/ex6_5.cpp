#include <iostream>

int abs_own(int val)
{
	if(val < 0)
	{
		return -val;
	}
	return val;
}

int main()
{
	std::cout << "输入一个整数： " << std::endl;
	int num = 0;
	std::cin >> num;
	std::cout << "绝对值结果： " << abs_own(num) << std::endl; 
	return 0;
}
