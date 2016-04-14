#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s("hello world");
	//string s;
	//cout << "Plase input string: " << endl;
	//cin >> s;
	for(auto &c : s)
		c = 'X';
	cout << s << endl;
	return 0;
}

