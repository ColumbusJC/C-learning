

#include "pch.h"
#include <iostream>
using namespace std;

double power(double x, int n) {
	double val = 1.0;
	while (n--) {
		val *= x;
	}
	return val;
}

int main() {
	double value = 0;
	int a, b = 1;
	a = 0;
	for (int i = 7; i >= 0; i--) {
		char ch;
		cin >> ch;
		if (ch == '-') {
			if (a == 0 and i == 7) {
				i++;
				a++;
				b = -1;
			}
			else {
				cout << "输入错误";
				goto part2;
			}
		}
		if (ch == '1') {
			value += b * power(2, i);
		}
	}
	cout << value << endl;
part2:
	return 0;
}