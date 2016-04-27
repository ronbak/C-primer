#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string s1, s2;
	do
	{
		cout << "ÊäÈëÁ½¸ö×Ö·û´®£º " << endl;
		cin >> s1 >> s2;
		if(s1.size() > s2.size())
		{
			for(char &temp : s2)
			{
				cout << temp ;
			}
			cout << endl;
		}
		else
		{
			for(char &temp : s1)
			{
				cout << temp;
			}
			cout << endl;
		}
	}while(cin);
	return 0;
}
