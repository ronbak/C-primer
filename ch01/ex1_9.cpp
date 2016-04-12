#include <iostream>

int main()
{
	int val = 50, sum = 0;
	while( val <= 100 )
	{
		sum += val;
		++val;
	}

	int text = 50, text_sum = 0;
	while( text <= 100 )
	{
		text_sum += text;
		text++;
	}
	std::cout << "The sum of 50 to 100 inclusvise is " << sum << std::endl;
	std::cout << "The text val is " << text_sum << std::endl;
	return 0;
}

