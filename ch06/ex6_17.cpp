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
			cout << "�д�д��ĸ������" << endl;
			return 0;
		}
	}
	cout << "û�д�д��ĸ������" << endl;
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
	cout << "����һ���ַ����� " << endl;
	string s;
	char temp;
	while(cin >> temp)
	{
		s.push_back(temp);
	}
	cin.clear();
	cout << "����ģʽ(1~2): " << endl;
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
				cout << "�ı����ַ�����" << endl;
				for(const char &i : s)
				{
					cout << i ;
				}
				cout << endl;
			}
	}
	return 0;
}
