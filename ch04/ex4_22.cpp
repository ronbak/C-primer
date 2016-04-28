#include <iostream>


using std::cout;
using std::cin;
using std::endl;


int main()
{
	short mode = 0;
	cout << "输入模式（1~2）:" << endl;
	cin >> mode;
	switch(mode)
	{
		case 1:
			{
				cout << "输入您的成绩： " << endl;
				int grade = 0;
				cin >> grade;
				cout << "成绩等级是: " << (grade < 60 ? "fail" : (grade < 75 ? "low pass" : (grade < 90 ? "pass" : "high pass"))) << endl;
				break;
			}
		case 2:
			{
				cout << "输入您的成绩： " << endl;
				int grade = 0;
				cin >> grade;
				cout << "成绩等级是： " ;
				if(grade >= 90)
				{
					cout << "high pass" << endl;
				}
				else if(grade >= 75)
				{
					cout << "pass" << endl;
				}
				else if(grade >= 60)
				{
					cout << "low pass" <<endl;
				}
				else
				{
					cout << "fail" << endl;
				}
			}
	}
	return 0;
}
