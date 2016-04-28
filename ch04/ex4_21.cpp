#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> v1{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	for(auto i : v1)
	{
		cout << "V1中的数值是： " << i << endl;
	}
	for(auto &i : v1)
	{
		i % 2 != 0 ? i *= 2 : i = i ;
	}
	for(auto i : v1)
	{
		cout << "改变后的V1： " << i << endl;
	}
	return 0;
}
