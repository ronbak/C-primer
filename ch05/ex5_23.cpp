#include <iostream>
#include <stdexcept>


using std::cout;
using std::cin;
using std::endl;


int main()
{
	int num1 = 0, num2 = 0;
	cout << "�������������� " << endl;
	cin >> num1 >> num2;
	if(num2 == 0)
		cout << "���󣺳���Ϊ0������" << endl;
	else
		cout << num1/num2 << endl;	
	return 0;
}

