#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;


int main()
{
	int arr_from[] = {1,23,43,4,34,3423,23,12};
	vector<int> arr_to(begin(arr_from), end(arr_from));
	for(auto i : arr_to)
	  cout << i << endl;
	return 0;
}


