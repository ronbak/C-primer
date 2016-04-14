#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	cout << "Plase input something: " << endl;
	string s;
	//while(cin >> s)
	while(getline(cin, s))
	{
		cout << s << endl;
	}
	return 0;
}


