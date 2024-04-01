#include <iostream>
using namespace std;
#define xiaoyao 3.14;
#include<math.h>
void shixun1(double* x, double* y, double k, int a, int b) {
	double x1 = 0;
	double y1 = 0;
	x1 = *x;
	y1 = *y;
	double x2 = 0;
	double y2 = 0;
	double theta = xiaoyao;
	theta = theta / 2;
	x2 = x1 * cos(theta - atan(k)) - y1 * sin(theta - atan(k)) - a * cos(theta - atan(k)) + b * sin(theta - atan(k)) + a;
	y2 = x1 * sin(theta - atan(k)) + y1 * cos(theta - atan(k)) - a * sin(theta - atan(k)) - b * cos(theta - atan(k)) + b;
	*x = x2;
	*y = y2;
}
int main() {
	double x = 0;
	double y = 0;
	double x1 = 0;
	double y1 = 0;
	double x2 = 0;
	double y2 = 0;
	x = 10;
	y = 10;
	x1 = 30;
	y1 = 10;
	x2 = 20;
	y2 = 25;
	int a = 0;
	int b = 1;
	double k = 2;
	shixun1(&x, &y, k, a, b);
	cout << "xiaoyao" << x << endl;
	cout << "xiaoyao" << y << endl;
	shixun1(&x1, &y1, k, a, b);
	cout << "xiaoyao" << x1 << endl;
	cout << "xiaoyao" << y1 << endl;
	shixun1(&x2, &y2, k, a, b);
	cout << "xiaoyao" << x2 << endl;
	cout << "xiaoyao" << y2 << endl;
}

