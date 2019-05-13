#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;

int main ()

{
	int x, y;
	double z;
	double v;
	z = 2.5;
	
	cout << "Enter x and y values. \n\n"<< "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "\n";

	switch (x)
	{
	case 1:
		if (1 < y < 5) {
	
		cout << "V = " << setprecision(2); v = (x * y * z); 
		cout << v << setw(10);
		}

		else {

		cout << "V = " << setprecision(2); v = (x + (y / z));
		cout << v << setw(10);
		}
		break;

	case 2:
		if (y <= 5) {
		
		cout << "V = " << setprecision(2); v= abs((x - y) / z);
		cout << v << setw(10);
		}
		
		else {
		
		cout << "V = " << setprecision(2); v = (x - (sqrt(y + z)));
		cout << v << setw(10);
		} 
		
		break;

	default:
		cout << "V = " << setprecision(2); v = (x + y + z);
		cout << v << setw(10);

	}

	_getch();
	return 0;
}

