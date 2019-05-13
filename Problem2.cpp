#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int c, uBal;


	cout << "Gallons used: "; cin >> c;
	cout << "Unpaid Balance: "; cin >> uBal;
	cout << "\n";

	if (uBal > 0)
		cout << "Total Bill: " << (c * 1.10) + 35 + 20 << endl;
	else 
		cout << "Total Bill: " << (c * 1.10) + 35 << endl;

	_getch();
	return 0;
	
}