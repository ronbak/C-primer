#include <iostream>
#include <string>
#include "string.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
	string s1  = "Something", s2 = "Anything";
	if(s1 > s2) 
	  cout << "S1 is bigger" << endl;
	else if(s1 < s2)
	  cout << "S2 is bigger" << endl;
	else
	  cout << "equal" << endl;

	const char ca1[] = "same string", ca2[] = "aame string";
	switch(strcmp(ca1,ca2))
	{
		case 0:
			cout << "equal" << endl;
			break;
		case -1:
			cout << "ca2 is bigger" << endl;
			break;
		case 1:
			cout << "ca1 is bigger" << endl;
			break;
	}
	return 0;
}


