#include "Chapter6.h"

int main()
{
	std::cout << "输入一个整数： " << std::endl;
	int num = 0;
	std::cin >> num;
	num = abs_own(num);
	std::cout << "绝对值结果： " << num << std::endl; 
	std::cout << "阶乘结果： " << fact(num) << std::endl;
	return 0;
}
