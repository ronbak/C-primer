#include <iostream>
#include "stddef.h"
#include <vector>


using std::cout;
using std::cin;
using std::endl;
using std::vector;



int main()
{
	int arr[10];
	for(int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	int arr_copy[10];
	for(int i = 0; i < 10; i++)
	{
		arr_copy[i] = arr[i];
	}
	for(auto i : arr_copy)
	{
		cout << "ONE: " << i << " ";
	}
	cout << endl;


	vector<int> arr1;
	for(int i = 0; i < 10; i++)
	{
		arr1.push_back(i);
	}
	vector<int> arr1_copy;
	for(auto i : arr1)
	  arr1_copy.push_back(i);
	for(auto i : arr1_copy)
	  cout << "TWO: " << i << " ";
	cout << endl;


	return 0;
}




