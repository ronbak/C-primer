#include <iostream>
#include <string>
#include <vector>

using std::endl;
using std::cin;
using std::cout;
using std::vector;


int main()
{
	vector<int> v1;
	int temp = 0;
	unsigned cnt = 0;
	while(cin >> temp)
	{
		v1.push_back(temp);
		cnt++;
	}
	int j = 0;
	auto beg = v1.begin();
	auto end = v1.end();
	while(j < cnt)
	{
		cout << *(beg + j) << endl;
		j++;
	}
	for(int i = 0; i <= (cnt/2); i++)
	{
		cout << "OUTPUT" << endl;
		cout << *beg + *(end - 1) << endl;
		beg += 1;
		end -= 1;
	}


	return 0;
}



