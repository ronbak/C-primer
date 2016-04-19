#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int arr[] = {1,2,3,4,5,6};
	int *p = arr;
	for(int i = 0; i < 6; i++)
	{
		*(p + i) = 0;
	}
	for(auto i : arr)
	  cout << i << " ";
	cout << endl;
	return 0;
}


