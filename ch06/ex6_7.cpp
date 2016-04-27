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
	std::cout << "第" << temp << "次调用" << std::endl;
	temp = COUNTER();
	std::cout << "第" << temp << "次调用" << std::endl;
	temp = COUNTER();
	std::cout << "第" << temp << "次调用" << std::endl;
	temp = COUNTER();
	std::cout << "第" << temp << "次调用" << std::endl;
	temp = COUNTER();
	std::cout << "第" << temp << "次调用" << std::endl;
	temp = COUNTER();
	std::cout << "第" << temp << "次调用" << std::endl;
	temp = COUNTER();
	std::cout << "第" << temp << "次调用" << std::endl;
	temp = COUNTER();
	std::cout << "第" << temp << "次调用" << std::endl;
	return 0;
}
