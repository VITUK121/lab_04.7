#include <iostream>
#include <iomanip>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	double x, xp, xk, dx, eps, a, S, R;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "---------------------------------------\n";
	cout << "|" << setw(28) << "Заголовок таблицi" << setw(10) << "|" << "\n";
	cout << "---------------------------------------\n";
	cout << "|" << setw(3) << "x" << setw(4) << "|" << setw(10) << "arctg(x)" << setw(2) << "|" << setw(5) << "S" << setw(5) << "|" << setw(5) << "n" << setw(5) << "|\n";
	cout << "---------------------------------------\n";
	x = xp;

	while (x <= xk)
	{
		n = 0;
		a = -1/x;
		S = a;
		do {
			n++;
			R = (-(2 * n - 1) / (2 * n + 1))*(1/(x*x));
			a *= R;
			S += a;
		} while (abs(a) >= eps);
		cout << "|" << setw(5) << setprecision(2) << x << " |"
			<< setw(8) << setprecision(5) << atan(x) << "   |"
			<< setw(8) << setprecision(5) << S << " |"
			<< setw(6) << n << " |"
			<< endl;
		x += dx;
	}

}