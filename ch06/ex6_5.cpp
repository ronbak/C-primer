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
	std::cout << "����һ�������� " << std::endl;
	int num = 0;
	std::cin >> num;
	std::cout << "����ֵ����� " << abs_own(num) << std::endl; 
	return 0;
}
