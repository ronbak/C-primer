#include "Chapter6.h"

int main()
{
	std::cout << "����һ�������� " << std::endl;
	int num = 0;
	std::cin >> num;
	num = abs_own(num);
	std::cout << "����ֵ����� " << num << std::endl; 
	std::cout << "�׳˽���� " << fact(num) << std::endl;
	return 0;
}
