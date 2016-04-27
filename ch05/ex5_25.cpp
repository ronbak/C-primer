#include <iostream>
#include <stdexcept>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;

int main()
{
	int num1 = 0, num2 = 0;
	cout << "输入两个整数： " << endl;
	while(cin >> num1 >> num2)
	{
		try
		{
			if(num2 == 0)
				throw runtime_error("错误：除数为0！！！" );	
			cout << "结果：" << num1/num2 << endl;
			cout << "请输入两个整数： " << endl;
		}
		catch(runtime_error err)
		{
			cout << err.what() << endl;
			cout << "是否重新输入？ Y or N" << endl;
			std::string flag_chose;
			cin >> flag_chose;
			if(flag_chose == "N" || flag_chose == "n")
			{
				break;
			}
			else
			{
				cout << "输入两个整数： " << endl;	
			}
		}
	}
	return 0;
}




