#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{
	char p;
	int hrs, b;

	cout << "Enter package type and hours added. \n\n";
	cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n";
	cout <<	"Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.\n";
	cout <<	"Package C: For P1995/mo of unlimited access is provided.\n\n";

	cout << "Package A/B/C: "; cin >> p;
	cout << "\n";

	switch (p)
	{
	case 'a':
	case 'A': b = 995;
		cout << "If the maximum hours of access was exceeded, enter the total amount of hours used: "; cin >> hrs;
		cout << "\n";
		if (hrs > 10)	{ 
		b += ((hrs - 10) * 20);
 		}
	break;

	case 'b':
	case 'B': b = 1495;
		cout << "If the maximum hours of access was exceeded, enter the total amount of hours used: "; cin >> hrs;
		cout << "\n";
		if (hrs > 20)	{ 
		b += ((hrs - 20) * 10);
 		}
	break;

	case 'c':
	case 'C': b = 1995;
	break;
	}

	cout << "Costumer's monthly bill: " << b;

	_getch();
	return 0;

}
