#include <iostream>

int main()
{
	std::cout << "Ex1.9" << std::endl;
	int sum = 0;
	for( int i = 50; i<=100; i++ )
	{
		sum += i;
	}
	std::cout << sum << std::endl;
	std::cout << "Ex1.10" << std::endl;
	for( int i = 10; i >= 0; i-- )
	{
		std::cout << i << std::endl;
	}
	std::cout << "Ex1.11" << std::endl;
	std::cout << "Enter two numbers" << std::endl;
	int num1 = 0 ,num2 = 0;
	std::cin >> num1 >> num2 ;
	if( num1 < num2 )
	{
	 int exchange = 0;
	 exchange = num1;
	 num1 = num2;
	 num2 = exchange;
	}
	for( int i = ( num1 - num2 ); i >= 0; i-- )
	{
		std::cout << num2++ << std::endl;
	}
}

