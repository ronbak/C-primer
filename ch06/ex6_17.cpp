#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int is_Upper(const string &s1)
{
	for(auto &i : s1)
	{
		if(isupper(i))
		{
			cout << "有大写字母！！！" << endl;
			return 0;
		}
	}
	cout << "没有大写字母！！！" << endl;
	return 0;
}

void Become_upper(string &s1)
{
	for(auto &i : s1)
	{
		i = toupper(i);
	}
}

int main()
{
	cout << "输入一段字符串： " << endl;
	string s;
	char temp;
	while(cin >> temp)
	{
		s.push_back(temp);
	}
	cin.clear();
	cout << "输入模式(1~2): " << endl;
	short mode = 0;
	cin >> mode;
	switch(mode)
	{
		case 1:
			{
				is_Upper(s);
			}
		case 2:
			{
				Become_upper(s);
				cout << "改变后的字符串：" << endl;
				for(const char &i : s)
				{
					cout << i ;
				}
				cout << endl;
			}
	}
	return 0;
}
