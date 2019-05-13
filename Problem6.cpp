#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i, n, s;
	s = 0;

	cout << "Enter whole number: "; cin >> i;

	if (i > 0)
	{
		for (n = 1;n <= i;n++){
		s = s+n;
		}

		cout << "The sum of all whole numbers from 1 to the whole number is: " << s;
		cout << "\n";

		}
	else
		cout << "THANK YOU!";

	_getch();
	return 0;
	}