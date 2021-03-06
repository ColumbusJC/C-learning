#include "pch.h"
#include <iostream>
using namespace std;

double arctan_own(double x) {
	double val = x, a = 1, b = 3, c;
	c = 3.0;
	a = -1 * x * x * x * a / c;
	while (a > 1e-15 or a < -1e-15) {
		val += a;
		c += 2.0;
		a = -1 * x*x*a*(c - 2) / c;
	}
	return val;
}

int main() {
	double pi;
	pi = 16 * arctan_own(1 / 5.0) - 4 * arctan_own(1 / 239.0);
	cout << pi << endl;
	return 0;
}