#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, KonggeCnt = 0, ZhibiaofuCnt = 0, HuanhangCnt = 0;
	cout << "输入字符串： " << endl;
	char str;
	while(cin >> std::noskipws >> str)  //注意这边的std::noskipws 只有添加了这个才能识别符号！！！！ 
	{
		switch(str)
		{
			case 'a':
				;
			case 'A':
				++aCnt;
				break;
			case 'e':
				;
			case 'E':
				++eCnt;
				break;
			case 'i':
				;
			case 'I':
				++iCnt;
				break;
			case 'o':
				;
			case 'O':
				++oCnt;
				break;
			case 'u':
				;
			case 'U':
				++uCnt;
				break;
			case ' ':
				++KonggeCnt;
				break;
			case '\t':
				++ZhibiaofuCnt;
				break;
			case '\n':
				++HuanhangCnt;
				break;
		}
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		 << "Number of vowel e: \t" << eCnt << '\n'
		 << "Number of vowel i: \t" << iCnt << '\n'
		 << "Number of vowel o: \t" << oCnt << '\n'
		 << "Number of vowel u: \t" << uCnt << '\n'
		 
		 << "Number of vowel 空格: \t" << KonggeCnt << '\n'
		 << "Number of vowel 制表符: \t" << ZhibiaofuCnt << '\n'
		 << "Number of vowel 换行符: \t" << HuanhangCnt << endl;
	return 0;
}		
