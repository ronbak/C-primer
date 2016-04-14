#include <iostream>
#include <string>
#include <ostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>



int main()
{
	int a = 3, b = 4;

	decltype (a) c = a;
	
    decltype (b) d = a;

	++c;
	++d;

	std::cout << c << " " << d << std::endl;

}





