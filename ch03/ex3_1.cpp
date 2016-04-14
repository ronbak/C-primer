#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;



struct Sales_data
{
	string bookNo;
	unsigned sale;
	double price;
	double total;
};



int main()
{
	unsigned mode;
	cout << "Please input Mode Number: " << endl;
	cin >> mode;
	switch(mode)
	{
		case 1:
			{
				int i = 50;
				int sum = 0;
				while(i <= 100)
				{
					sum += i;
					i++;
				}
				cout << "Sum of 50 to 100 is: " << sum << endl;
				break;
			}
		case 2:
			{
				int i = 10;
				while(i >= 0)
				{
					cout << i << endl;
					i--;
				}
				break;
			}
		case 3:
			{
				cout << "Plase input two number: " << endl;
				int num1, num2;
				if(num1 < num2)
				{
					int temp = 0;
					temp = num2;
					num2 = num1;
					num1 = temp;
				}
				int i = num1 - num2;
				while(i >= 0)
				{
					cout << num2 << endl;
					i--;
				}
				break;
			}
		case 4:
			{
				Sales_data book;
				cout << "Plase input record: " << endl;
				cin >> book.bookNo >> book.sale >> book.price;
				cout << book.bookNo << " " << book.sale << " " << book.price <<endl;
				break;
			}
		case 5:
			{
				Sales_data book1, book2;
				cout << " Plase input two records: " << endl;
				cin >> book1.bookNo >> book1.sale >> book1.price;
				cin >> book2.bookNo >> book2.sale >> book2.price;
				if(book1.bookNo == book2.bookNo)
				{
					book1.total = book1.sale * book1.price;
					book2.total = book2.sale * book2.price;
					book1.total += book2.total;
					book1.sale += book2.sale;
					cout << book1.bookNo << " " << book1.sale << " " << book1.price << " " << book1.total << endl;
				}
				else
				  cout << "Plase input two same records. " << endl;
				break;
			}
		case 6:
			{
				Sales_data book, book_old;
				cout << "Plase input records: " << endl;
				if(cin >> book_old.bookNo >> book_old.sale >> book_old.price)
				{
					book_old.total = book_old.price * book_old.sale;
					while(cin >> book.bookNo >> book.sale >> book.price)
					{
						if(book_old.bookNo == book.bookNo)
						{

							book.total = book.sale * book.price;
							book_old.total += book.total;
							book_old.sale += book.sale;
						}
						else
						{
							cout << book_old.bookNo << " " << book_old.sale << " " << book_old.price << " " << book_old.total << endl;
							book_old = book;
						}
					}
				}
				break;
			}
		case 7:	
			{
				unsigned cnt = 0;
				Sales_data book, book_old;
				cout << "Plase input records: " << endl;
				if(cin >> book_old.bookNo >> book_old.sale >> book_old.price)
				{
					cnt = 1;
					book_old.total = book_old.price * book_old.sale;
					while(cin >> book.bookNo >> book.sale >> book.price)
					{
						if(book_old.bookNo == book.bookNo)
						{
							cnt++;
							book.total = book.sale * book.price;
							book_old.total += book.total;
							book_old.sale += book.sale;
						}
						else
						{
							cout << book_old.bookNo << " " << book_old.sale << " " << book_old.price << " " << book_old.total << endl;
							cout << " Times: " << cnt << endl;
							book_old = book;
							cnt =1;
						}
					}
				}
				break;
			}
	}
}




