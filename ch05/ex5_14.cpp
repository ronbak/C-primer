#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
	int cnt = 1, cnt_max = 0;
	string s1, s2, s_max;
	if(cin >> s2)
	{
		;
	}
	while(cin >> s1)
	{
		if(s1 == s2)
		{
			++cnt;
		}
		else
		{
			if(cnt_max < cnt)
			{
				s_max = s2;
				cnt_max = cnt;	
			}
			s2 = s1;
			cnt = 1;
		}
		
	}
	cout << s_max << " " << cnt_max << endl;
	return 0;
}


