#include <iostream>
#include <string>
#include <vector>


int main()
{
	std::vector<std::string> text;
	std::string word;
	while(std::cin >> word)
	  text.push_back(word);
	return 0;
}

