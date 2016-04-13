#include <iostream>
#include <string>


struct Sales_data
{
	std::string bookNo;
	unsigned sold;
	double price;
};


int main()
{
	short mode;
	std::cout << "Select ex1.21 ~ ex1.26  AS: 1~6 " << std::endl;
	std::cin >> mode;
	Sales_data book;
	Sales_data book1, book2;
	double TotalMoney;
	switch(mode)
	{
		case 1:
			{
				std::cout << "Enter two recrod:" << std::endl;
				std::cin >> book1.bookNo >> book1.sold >> book1.price;
				std::cin >> book2.bookNo >> book2.sold >> book2.price;
				if(book1.bookNo == book2.bookNo)
				{
					book = book1;
					book.sold = book1.sold + book2.sold;
					TotalMoney = book1.sold * book1.price + book2.sold * book2.price;	
					std::cout << book.bookNo << " " << book.sold << " " << TotalMoney << std::endl;
				}
				else
				  std::cout << "Plase input two same recrods" << std::endl;
				break;
			}
		case 2:
			{
				std::cout << "Enter recrod: " << std::endl;
				
				if(std::cin >> book.bookNo >> book.sold >> book.price)
				{
					while(std::cin >> book1.bookNo >> book1.sold >> book1.price)
					{
						if(book.bookNo == book1.bookNo)
						{
							book.sold += book1.sold;
							TotalMoney = book1.sold * book.price + book.sold * book.price;
							std::cout << book.bookNo << " " << book.sold << " " 
								<< book.price << " " << TotalMoney << std::endl;
						}
					}
				}
				break;
				
			}
		case 3:
			{
				int cnt = 0;
				std::cout << "Enter record: " << std::endl;
				if(std::cin >> book.bookNo >> book.sold >> book.price)
				{
					cnt = 1;
					book.price = book.price * book.sold;
					while(std::cin >> book1.bookNo >> book1.sold >> book1.price)
					{
						if(book1.bookNo == book.bookNo)
						{
							cnt++;
							book.sold += book1.sold;
							book.price += (book1.sold * book1.price);
						}
						else
						{
							std::cout << " Total: " << book.bookNo << " "
								<< book.sold << " " << book.price << " Nunber of record:  " << cnt << std::endl;
							cnt = 0;
						}
					}
				}
				else
				{
					std::cout << " No data?! " << std::endl;
				}

				break;
			}
	}
}


