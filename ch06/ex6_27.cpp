#include <iostream>


int Sum(std::initializer_list<int> const& num)
{
	int sum = 0;
	for(int i : num)
	{
		sum += i;
	}
	return sum;
}



int main()
{
	int sum = 0;
	std::initializer_list<int> num = {1,2,3,4,5,6,7,8,9};
	std::cout << Sum(num) << std::endl;
	return 0;
}
