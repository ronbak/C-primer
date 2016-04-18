#include <iostream>
#include <string>
#include <vector>
#include <cctype>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


int main()
{
	vector<string> s;
	string word;
//	for(string word; cin >> word; s.push_back(word))
//	  ;
	while(getline(cin, word))
	{
	  s.push_back(word);
	  cout << "input OK" << endl;
	}
	cout << "input end" << endl;
	for(auto &bit : s)
	{
		 for(auto &str : bit)
		   bit = toupper(str);
	}
	for(auto &bit : s)
	  cout << bit << endl;
}



/*
int main()
{
    vector<string> vec;
    for (string word; cin >> word; vec.push_back(word))
	  ;
    for (auto &str : vec) 
	  for (auto &c : str) 
		c = toupper(c);

    for (int i = 0; i != vec.size(); ++i)
    {
        if (i != 0 && i % 8 == 0) 
		cout << endl;
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}

*/
