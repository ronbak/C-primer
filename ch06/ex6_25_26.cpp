#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	string str;
	for(int i; i < argc; ++i)
	{
		str += string(argv[i]) + " ";
	}
	cout << str << endl;
	return 0;
}


/*
-static-libgcc    
*/
