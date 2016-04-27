#include <iostream>
#include <stdexcept>


using std::cout;
using std::cin;
using std::endl;


int main()
{
	int num1 = 0, num2 = 0;
	cout << "输入两个整数： " << endl;
	cin >> num1 >> num2;
	if(num2 == 0)
		cout << "错误：除数为0！！！" << endl;
	else
		cout << num1/num2 << endl;	
	return 0;
}

