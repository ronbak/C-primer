#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "�����ַ����� " << endl;
	char str;
	int num = 0;
	while(cin >> str)
	{
		if(str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
		{
			++num;
		}
	}
	cout << "Ԫ�����ִ����� " << num << endl; 
	return 0;
}
