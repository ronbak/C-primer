#include <iostream> 
#include <string>


using std::cout;
using std::endl;
using std::string;
using std::cin;


int main()
{
	cout << "Plase input mode: " << endl;
	auto mode = 0;
	cin >> mode;
	switch(mode)
	{	
		case 1:
			{
				string s("hello,world");
				auto i = 0;
				while(i <=  (s.size() - 1))
				{
					s[i] = 'X';
					i++;			
				}
				cout << s << endl;
				break;
			}
		case 2:
			{
				string s("hello,world");
				for(auto i = 0; i <= (s.size() - 1 ); i++)
				{
					s[i] = 'X';
				}
				cout << s << endl;
				break;
			}
	return 0;
	}
}

