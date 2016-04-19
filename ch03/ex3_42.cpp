#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


int main()
{
	vector<int> v1(10,21);
	int v[10];
	int cnt = 0;
	for(auto i : v1)
	{
		v[cnt] = i;
		cnt++;
	}
	for(auto j : v)
	  cout << j << endl;

	return 0;
}

