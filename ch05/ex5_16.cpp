#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string s1;
	cout << "whileÓï¾äÊµÏÖ£º " << endl;
	cout << "ÇëÊäÈë£º" << endl;
	while(cin >> s1)
	{
		cout << s1 << endl;
	}
	for(int i = 0; i < 100; i++)
	{
		cout << i << endl;
	}
	cout << "¸ÄĞ´ºó£º " << endl;
	cout << "whileÓï¾äÊµÏÖforÓï¾ä" << endl;
	int i ;
	while(i < 100)
	{
		i++;
		cout << i << endl;
	}
	cout << "forÓï¾äÊµÏÖwhileÓï¾ä" << endl;
	cout << "ÇëÊäÈë£º " << endl;
	for(int s2; cin >>  s2; )
	{
		cout << s2 << endl;
	}
		
}
