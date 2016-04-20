#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "Enter mode: " << endl;
	int mode  = 0;
	cin >> mode;
	int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	switch(mode)
	{
		case 0:
			{
				for(const int(&i)[4] : arr)
				  for(int j : i)
					  cout << j << " " ;
				cout << endl;
				break;
			}
		case 1:
			{
				for (size_t i = 0; i != 3; ++i)
					for (size_t j = 0; j != 4; ++j) 
						cout << arr[i][j] << " ";
			    	cout << endl;
				break;
			}
		case 2:
			{
				for (int(*row)[4] = arr; row != arr + 3; ++row)
					for (int *col = *row; col != *row + 4; ++col) 
						cout << *col << " ";
				cout << endl;
				break;
			}
	}
	return 0;
}


