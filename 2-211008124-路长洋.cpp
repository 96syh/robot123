#include<math.h>
#include<iostream>
using namespace std;
#define luchangyang 3.14;
void WW(double* x, double* y, double a, double b, double k, double* resultx, double* resulty) {
	double s = luchangyang;
	s = s / 2;
	for (int i = 0; i < 3; i++) {
		resultx[i] = x[i] * cos(s - atan(k)) - y[i] * sin(s - atan(k)) - a * cos(s - atan(k)) + b * sin(s - atan(k)) + a;
		resulty[i] = x[i] * sin(s - atan(k)) + y[i] * cos(s - atan(k)) - a * sin(s - atan(k)) - b * cos(s - atan(k)) + b;
	}
}
int main() {
	double x[3] = { 0 };
	double y[3] = { 0 };
	x[0] = 10;
	y[0] = 10;
	x[1] = 30;
	y[1] = 10;
	x[2] = 20;
	y[2] = 25;
	double a = 0;
	double b = 1;
	double k = 2;
	double resultx[3] = { 0 };
	double resulty[3] = { 0 };
	WW(x, y, a, b, k, resultx, resulty);
	for (int i = 0; i < 3; i++) {
		cout << "luchangyang" << resultx[i] << endl;
		cout << "luchangyang" << resulty[i] << endl;
	}
	return 0;
}