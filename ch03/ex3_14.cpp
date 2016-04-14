#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::endl;
using std::cout;
using std::cin;
using std::string;


int main()
{
	vector<int> text;
	int word;
	while( cin >> word )
	{
		text.push_back(word);
	}
	return 0;
}

