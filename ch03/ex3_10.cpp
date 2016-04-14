#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{

	cout << " Input a string: " << endl;
	string s, s1;
	cin >> s;
	decltype(s.size()) cnt = 0;
	for(auto c : s)
	{
		if( !ispunct(c) )
			s1 += c;
	}
	cout << s1 << endl;
	return 0;
}

