#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "输入字符串： " << endl;
	char str;
	int num = 0;
	while(cin >> str)
	{
		if(str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
		{
			++num;
		}
	}
	cout << "元音出现次数： " << num << endl; 
	return 0;
}
