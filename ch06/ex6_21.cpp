#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Compare(int num1, int* num2)
{
	if((num1 - *num2) >= 0)
	{
		*num2 = num1;
	}
}


int main()
{
	cout << "�������ڱȽϵ�����������" << endl;
	int num = 0;
	int num1 = 0;
	int *Large = &num1;
	cin >> num >> num1;
	Compare(num, Large);
	cout << "�����������ǣ� " << *Large << endl;
	return 0;
}
