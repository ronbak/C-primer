#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book, book1, book2;
	std::cout << "Entry two record" << std::endl;
	while(std::cin >> book1 >> book2)
	{
		if(book1 == book2)
		{
			book = book1 + book2;
			std::cout << book << std::endl;
		}
	}
	return 0;
}

