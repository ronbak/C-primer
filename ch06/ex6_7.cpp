#include <iostream>

int COUNTER(void)
{
	static int cnt = -1;
	++cnt;
	return cnt;
}

int main()
{
	int temp = 0;
	temp = COUNTER();
	std::cout << "��" << temp << "�ε���" << std::endl;
	temp = COUNTER();
	std::cout << "��" << temp << "�ε���" << std::endl;
	temp = COUNTER();
	std::cout << "��" << temp << "�ε���" << std::endl;
	temp = COUNTER();
	std::cout << "��" << temp << "�ε���" << std::endl;
	temp = COUNTER();
	std::cout << "��" << temp << "�ε���" << std::endl;
	temp = COUNTER();
	std::cout << "��" << temp << "�ε���" << std::endl;
	temp = COUNTER();
	std::cout << "��" << temp << "�ε���" << std::endl;
	temp = COUNTER();
	std::cout << "��" << temp << "�ε���" << std::endl;
	return 0;
}
