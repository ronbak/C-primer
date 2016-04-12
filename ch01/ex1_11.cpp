#include <iostream>

int main()
{
	int num1 = 0, num2 = 0, val = 0;
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> num1 >> num2 ;
	std::cout << "You enter number is: " << num1 << " and " << num2 << std::endl;
	if ( num1 > num2 )
	{
		val = num1 - num2;
		while( val >= 0 )
		{
			std::cout << num2++ << std::endl;
			--val;
		}
	}
	else
	{
		val = num2 - num1;
		while( val >= 0 )
		{
			std::cout << num1++ << std::endl;
			--val;
		}
	
	}		
}	
