#include <iostream>
#include<math.h>
using namespace std;
#define songwenhuan 3.14

void XZ(double* x, double* y, int a, int b, double theta) {
	double x0 = 0;
	double y0 = 0;
	double x2 = 0;
	double y2 = 0;
	x0 = *x;
	y0 = *y;
	x2 = x0 * cos(theta) - y0 * sin(theta) + cos(theta) * a - sin(theta) * b - a;
	y2 = x0 * sin(theta) + y0 * cos(theta) + sin(theta) * a + cos(theta) * b - b;
	*x = x2;
	*y = y2;
}
int main() {
	double x0 = 0;
	double y0 = 0;
	x0 = 10;
	y0 = 10;
	double x1 = 0;
	double y1 = 0;
	x1 = 30;
	y1 = 10;
	double x2 = 0;
	double y2 = 0;
	x2 = 20;
	y2 = 25;
	double a = 10;
	double b = 25;
	double theta = songwenhuan;
	theta = theta / 6;
	XZ(&x0, &y0, a, b, theta);
	cout << x0 << endl;
	cout << y0 << endl;
	XZ(&x1, &y1, a, b, theta);
	cout << x1 << endl;
	cout << y1 << endl;
	XZ(&x2, &y2, a, b, theta);
	cout << x2 << endl;
	cout << y2 << endl;

}
