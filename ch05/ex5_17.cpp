#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	//vector<int> v1{1,2,3,4,5,6,7,8,9}, v2{1,2,3};
	
	vector<int> v1, v2;
	cout << "输入一段数字组： " << endl;
	int temp;
	while(cin >> temp)
		v1.push_back(temp);
	cin.clear();
	cout << "输入另一段数字组： " << endl;
	while(cin >> temp)
		v2.push_back(temp);

	if(v1.size() > v2.size())
	{
		for(int i; i < v2.size(); i++)
		{
			if(v1[i] != v2[i])
			{
				cout << "错误！！！" << endl;
				break;
			}
			else if(i == (v2.size() - 1))
			{
				cout << "正确！！！" << endl;
			}
		}
	} 
	else
	{
		for(int i; i < v1.size(); i++)
		{
			if(v1[i] != v2[i])
			{
				cout << "错误！！！" << endl;
				break;
			}
			else if(i == (v1.size() - 1))
			{
				cout << "正确！！！" << endl;
			}
		}
	}
}
