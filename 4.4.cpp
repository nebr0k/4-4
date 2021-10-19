//Kоцюба Остап в-4
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(4) << " |"
		<< setw(6) << "y" << setw(6)  << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= 0)
			y = -(R * x + 6 * R) / 6;
		else
			if (x <= R)
				y = -sqrt(R * R - x * x);
			else
				if (x > R && x < 2 * R)
					y = sqrt(R * R - (x - R) * (x - R));
				else
					y = R;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}