#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, KonggeCnt = 0, ZhibiaofuCnt = 0, HuanhangCnt = 0;
	cout << "�����ַ����� " << endl;
	char str;
	while(cin >> std::noskipws >> str)  //ע����ߵ�std::noskipws ֻ��������������ʶ����ţ������� 
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
		 
		 << "Number of vowel �ո�: \t" << KonggeCnt << '\n'
		 << "Number of vowel �Ʊ��: \t" << ZhibiaofuCnt << '\n'
		 << "Number of vowel ���з�: \t" << HuanhangCnt << endl;
	return 0;
}		
