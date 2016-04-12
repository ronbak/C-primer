#include <iostream>
#include "Sales_item.h"


int main()
{
	int val = 1;
	Sales_item book, book_old;
	if (std::cin >> book_old)
	  while (std::cin >> book)
	  {
		  if(book.isbn() == book_old.isbn())
		  {
			  val++;
			  book_old = book + book_old;
		  }
		  else
		  {
			  std::cout << "BOOK: " << book_old << "times: " << val << std::endl;
			  val = 1;
			  book_old = book;
		  }
	  }
	
}


