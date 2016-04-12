#include <iostream>


int main()
{
	int i = 10;
	int *p = &i;

	std::cout << i << " " << *p << std::endl;

	i = 1;
	std::cout << i << " " << *p << std::endl;

	*p = *p + 1 ;
	std::cout << i << " " << *p << std::endl;
}



