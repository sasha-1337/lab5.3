#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(const double x);

int main() {
	double tp, tk, L, n;

	cout << " tp = "; cin >> tp;
	cout << " tk = "; cin >> tk;
	cout << " n = "; cin >> n;

	double dt = (tk - tp) / n;
	double t = tp;

	while (t <= tk) {
		L = f(1 + 2 * t) + f(f(1) + 2 * f(2 * t)) * f(f(1) + 2 * f(2 * t));
		cout << t << "  " << L << endl;
		t += dt;
	}
	system("pause");
	return 0;
}

double f(const double x)
{
	if (abs(x) >= 1) {
		return (pow(sin(x), 2) + sin(x * x)) / (1 + pow(cos(x), 2));
	}

	if (abs(x) <= 1) {
		double A = 0;
		A = 1. / (1 + pow(x, 2));

		double S = 0;
		double n = 0;
		double a = 1;
		S = a;
		while (n <= 6) {
			n++;
			double R = x / (4 * n + 1);
			a *= R;
			S += a;
		}
		double D = A * S;

		return D;
	}
}

