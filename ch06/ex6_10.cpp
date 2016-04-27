#include <iostream>

void Exchange(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}


int main()
{
	std::cout << "输入两个整数： " << std::endl;
	int num1,num2;
	std::cin >> num1 >> num2;
	std::cout << "交换前： " << num1 << " " << num2 << std::endl;
	Exchange(&num1, &num2);
	std::cout << "交换后：" << num1 << " " << num2 << std::endl;
	return 0;
} 
