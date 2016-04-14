#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	string s1, s2;
	cout << " Plase input two strings : " << endl;
	cin >> s1 >> s2;
	unsigned mode;
	cout << "Mode: " << endl;
	cin >> mode;
	switch(mode)
	{	
		case 1:
		{
			if(s1 != s2)
			{
				if(s1 >s2)
				  cout << "The big one is : " << s1 << endl;
				else
				  cout << "The big one is : " << s2 << endl;
			}
			break;
		}
		case 2:
		{
			if(s1.size() != s2.size())
			{
				if(s1.size() > s2.size())
				  cout << "The longer one is : " << s1 << endl;
				else
				  cout << "The longer one is : " << s2 << endl;
			}
			break;
		}
	}
	return 0;

}

