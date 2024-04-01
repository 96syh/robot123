#include <iostream>
#include <cmath>

#define wupeng 3.14

using namespace std;

void pingyixuanzhuan(double* x, double* y, double a, double b, double theta) {
	theta = (wupeng / 2) - atan(2);

	double c = *x;
	double d = *y;
	double e = c;
	double f = d;

	e = (c)*cos(theta) + sin(theta) * (d);
	f = -(c)*sin(theta) + cos(theta) * (d);
	*x = e;
	*y = f;
}

int main() {
	double x = 10;
	double y = 10;
	double a = 0;
	double b = 1;
	double x1 = 30;
	double y1 = 10;
	double x2 = 20;
	double y2 = 25;
	double theta = wupeng;
	//theta = wupeng - atan(2);

	pingyixuanzhuan(&x, &y, a, b, theta);
	pingyixuanzhuan(&x1, &y1, a, b, theta);
	pingyixuanzhuan(&x2, &y2, a, b, theta);

	cout << "Point 1: (" << x << ", " << y << ")" << endl;
	cout << "Point 2: (" << x1 << ", " << y1 << ")" << endl;
	cout << "Point 3: (" << x2 << ", " << y2 << ")" << endl;

	return 0;
}