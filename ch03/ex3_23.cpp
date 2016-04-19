#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;



int main()
{
	vector<int> text(10);
	cout << "Plase input ten numbers: " << endl;
	int temp = 0;
	auto it_text = text.begin();
	auto cnt = 0;
	
	while(cin >> temp)
	{
	  text.push_back(temp);
	  cout << "input number: " << *it_text << endl;
      if(cnt > 10)
	  {
		  cout << "overflow" << endl;
		  break;
	  }
	  cnt++;
	}
	
	for(auto it = text.begin(); it != text.end(); it++)
	{
		*it = *it * 2;
		cout << *it << endl;
	}
	/*
	for(auto c : text)
	  cout << c << endl;
	*/
	return 0;
}

