#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::isalpha;


int main()
{
	string v1;
	while(cin >> v1)
	{
		;
	}
	for(auto it = v1.begin(); it != v1.end(); it++)
	{
		*it = toupper(*it);
	}
	cout << endl;
	for(auto it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it ;
	}
	cout << endl;
	return 0;
}



/*
int main()
{
    vector<string> text;
    for (string line; getline(cin, line); text.push_back(line));
    
    for (auto& word : text)
    {
        for (auto& ch : word)
            if (isalpha(ch)) ch = toupper(ch);
        cout << word << " ";
    }

    return 0;
}

*/
