#include <iostream>
#include <stdexcept>


using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;

int main()
{
	int num1 = 0, num2 = 0;
	cout << "�������������� " << endl;
	cin >> num1 >> num2;
	if(num2 == 0)
		throw runtime_error("���󣺳���Ϊ0������" );	
	cout << num1/num2 << endl;	
	return 0;
}


