
#include <iostream>
using namespace std;
#define zhanghao 3.14;
#include<math.h>
void shixun(double* x, double* y, int a, int b, double k) {
	
	double theta;
	double s = zhanghao;
	theta = (s/2) - atan(k);
	double x1 = 0;
	double y1 = 0;
	double x2 = 0;
	double y2 = 0;

	x1 = *x;
	y1 = *y;
	x2 = x1 * cos(theta) + y1 * sin(theta) + cos(theta) * a - sin(theta) * b - a;
	y2 = x1 * -sin(theta) + y1 * cos(theta) + sin(theta) * a + cos(theta) * b - b;
	*x = x2;
	*y = y2;
	//cout << *x << endl;
	//cout << *y << endl;

}
int main() {
	double x = 0;
	double y = 0;
	double x1 = 0;
	double y1 = 0;
	double x2 = 0;
	double y2 = 0;
	double k = 2;
	x = 10.0;
	y = 10.0;
	x1 = 30;
	y1 = 10;
	x1 = 20;
	y1 = 25;
	int a = 10;
	int b = 25;
	double theta = zhanghao;
	theta = theta / 6;
	shixun(&x, &y, a, b, k);
	cout << x << endl;
	cout << y << endl;
	shixun(&x1, &y1, a, b, k);
	cout << x1 << endl;
	cout << y1 << endl;
	shixun(&x2, &y2, a, b, k);
	cout << x2 << endl;
	cout << y2 << endl;

}
