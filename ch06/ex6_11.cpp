#include <iostream>

void reset(int &i)
{
	i = 0;
}


int main()
{
	int num = 92;
	reset(num); 
	std::cout << num << std::endl; 
	return 0;
}
