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
	std::cout << "�������������� " << std::endl;
	int num1,num2;
	std::cin >> num1 >> num2;
	std::cout << "����ǰ�� " << num1 << " " << num2 << std::endl;
	Exchange(&num1, &num2);
	std::cout << "������" << num1 << " " << num2 << std::endl;
	return 0;
} 
