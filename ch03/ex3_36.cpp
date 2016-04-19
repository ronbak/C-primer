#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main()
{
	int arr[10] , arr1[10];
	cout << "Plase input ten numbers: ";
	int cnt = 0;
	
	while(cin >> arr[cnt])
	{
		if(cnt >= 9)
		  break;
		cnt++;
	}
	cout << endl;

	cout << "Plase input ten numbers: ";
	cnt = 0;
	while(cin >> arr1[cnt])
	{
		if(cnt >= 9)
		  break;
		cnt++;
	}
	cout << endl;
	for(int i = 0; i <= 9; i++)
	{
		if(arr[i] != arr1[i])
		{
			cout << "NOT SAME!!!!" << endl;
			break;
		}
		else if(i == 9)
		  cout << "Same" << endl;
		
	}
	return 0;
}

