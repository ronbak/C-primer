#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	cout << "ÇëÊäÈëÄúµÄ³É¼¨£º " << endl;
	int grade = 0;
	cin >> grade;
	if(100 == grade)
		cout << "A++" << endl;
	else if(grade < 100 && grade >= 90)
		cout << "A" << endl;
	else if(grade < 90 && grade >= 80)
		cout << "B" <<endl;
	else if(grade < 80 && grade >= 70)
		cout << "C" <<endl; 
	else if(grade < 70 && grade >= 60)
		cout << "D" <<endl; 
	else
		cout << "E" <<endl;  
	return 0;
}
