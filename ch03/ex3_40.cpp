#include <iostream>
#include "string.h"

using std::cout;
using std::endl;


int main()
{
	const char s1[] = "Hello", s2[] = "World";
	char s3[100];
	strcpy(s3,s1);
	strcat(s3,s2);
	cout << s3 << endl;
	return 0;
}


