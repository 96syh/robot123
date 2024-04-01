#include <iostream>
#include <cmath>
#define yuzhiqiang 3.14
using namespace std;

void shixunyi(double* x, double* y, double a, double b, double theta) {
	double c = *x;
	double d = *y;
	double e;
	double f;
	e = cos(theta) * c - sin(theta) * d + cos(theta) * a - sin(theta) * b - a;
	f = sin(theta) * c + cos(theta) * d + sin(theta) * a + cos(theta) * b - b;
	*x = e;
	*y = f;
}
int main() {
	double x = 10;
	double y = 10;
	double x1 = 30;
	double y1 = 10;
	double x2 = 20;
	double y2 = 25;
	double a = 10;
	double b = 25;
	double theta = yuzhiqiang;
	theta = theta / 6;
	shixunyi(&x, &y, a, b, theta);
	shixunyi(&x1, &y1, a, b, theta);
	shixunyi(&x2, &y2, a, b, theta);
	cout << "yuzhiqiang:" << "Point 1:(" << x << ", " << y << ")" << endl;
	cout << "yuzhiqiang:" << "Point 2:(" << x1 << ", " << y1 << ")" << endl;
	cout << "yuzhiqiang:" << "Point 3:(" << x2 << ", " << y2 << ")" << endl;
	return 0;
}