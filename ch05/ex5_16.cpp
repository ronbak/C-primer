#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string s1;
	cout << "while���ʵ�֣� " << endl;
	cout << "�����룺" << endl;
	while(cin >> s1)
	{
		cout << s1 << endl;
	}
	for(int i = 0; i < 100; i++)
	{
		cout << i << endl;
	}
	cout << "��д�� " << endl;
	cout << "while���ʵ��for���" << endl;
	int i ;
	while(i < 100)
	{
		i++;
		cout << i << endl;
	}
	cout << "for���ʵ��while���" << endl;
	cout << "�����룺 " << endl;
	for(int s2; cin >>  s2; )
	{
		cout << s2 << endl;
	}
		
}
