#include <iostream>

void Exchange(int &num1, int &num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}


int main()
{
	int num1 = 0, num2 = 0;
	std::cout << "������������: " << std::endl;
	std::cin >> num1 >> num2;
	Exchange(num1, num2);
	std::cout << "��������� " << num1 << " " << num2 << std::endl;
	return 0;
}
