#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int f1, first = 0, second = 1, nxt;

	cout << "First 20 Fibonacci numbers (after 0 and 1).\n"; 

	for (f1 = 0; f1 < 22; f1++)
	{
		if (f1 <= 1)
			nxt = f1;
		else
		{
			nxt = first + second;
			first = second;
			second = nxt;
		}

		cout << nxt << ", ";
	}

	_getch();
	return 0;
}