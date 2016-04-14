#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::string;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6 {10};
	vector<string> v7{10, "hi"};

	for(auto test : v1)
	  cout << "v1: " << test << endl;
	for(auto test : v2)
	  cout << "v2: " << test << endl;
	for(auto test : v3)
	  cout << "v3: " << test << endl;
	for(auto test : v4)
	  cout << "v4: " << test << endl;
	for(auto test : v5)
	  cout << "v5: " << test << endl;
	for(auto test : v6)
	  cout << "v6: " << test << endl;
	for(auto test : v7)
	  cout << "v7: " << test << endl;
	return 0;
}


