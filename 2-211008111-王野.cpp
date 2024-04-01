#include <iostream>
#include <cmath>
using namespace std;
#define wangye 3.14

void shuzu(double* x, double* y, double k, double a, double b, double* resultx, double* resulty) {
	double w;
	double r;

	w = atan(k);
	r = wangye / 2 - w;

	for (int i = 0; i < 3; i++) {
		resultx[i] = cos(r) * x[i] + sin(r) * y[i] + cos(r) * a + sin(r) * b - a;
		resulty[i] = -sin(r) * x[i] + cos(r) * y[i] - sin(r) * a + cos(r) * b - b;
	}
}

int main() {
	double x[3] = {10, 30, 20};
	double y[3] = {10, 10, 25};
	double a = 0;
	double b = 1;
	double k = 2;
	double resultx[3] = {0};
	double resulty[3] = {0};
	shuzu(x, y, k, a, b, resultx, resulty);
	for (int i = 0; i < 3; i++) {
		cout << "ÍõÒ°." << resultx[i] << endl;
		cout << "ÍõÒ°." << resulty[i] << endl;
	}
	return 0;
}
