#include <iostream>
#include "stddef.h"

using std::cout;
using std::cin;
using std::endl;


int main()
{
	const size_t size = 10;
	int arr[size];
	for(int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for(auto j : arr)
	{
		cout << j << " " ;
	}
	cout << endl;
	return 0;
}

