#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	string s1, s;
	while(getline(cin, s1))
	{
		s = s + ' ' + s1;
	}
	cout << s << endl;
	return 0;
}

