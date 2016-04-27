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
	cout << "�������������� " << endl;
	while(cin >> num1 >> num2)
	{
		try
		{
			if(num2 == 0)
				throw runtime_error("���󣺳���Ϊ0������" );	
			cout << "�����" << num1/num2 << endl;
			cout << "���������������� " << endl;
		}
		catch(runtime_error err)
		{
			cout << err.what() << endl;
			cout << "�Ƿ��������룿 Y or N" << endl;
			std::string flag_chose;
			cin >> flag_chose;
			if(flag_chose == "N" || flag_chose == "n")
			{
				break;
			}
			else
			{
				cout << "�������������� " << endl;	
			}
		}
	}
	return 0;
}




