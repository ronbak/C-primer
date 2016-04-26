#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "ÇëÊäÈëÄúµÄ³É¼¨£º " << endl;
	int grade = 0;
	cin >> grade;
	cout << ((grade == 100) ? "A++" : (grade < 100 && grade >= 90) ? "A" : (grade < 90 && grade >= 80) ? "B" : (grade < 80 && grade >= 70) ? "C" : (grade < 70 && grade >= 60) ? "D" : "E" ) << endl;
	
	return 0;
}

