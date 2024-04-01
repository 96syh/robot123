#include <iostream>
using namespace std;
#define lizhuo 3.14;
#include<math.h>
void hanshu(double* x, double* y, int a, int b, double theta) {
	double x1 = 0;
	double y1 = 0;
	double x2 = 0;
	double y2 = 0;

	x1 = *x;
	y1 = *y;
	x2 = x1 * cos(theta) - y1 * sin(theta) + cos(theta) * a - sin(theta) * b - a;
	y2 = x1 * sin(theta) + y1 * cos(theta) + sin(theta) * a + cos(theta) * b - b;
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
	x = 10.0;
	y = 10.0;
	x1 = 30;
	y1 = 10;
	x2 = 20;
	y2 = 25;
	int a = 10;
	int b = 25;
	double theta = lizhuo;
	theta = theta / 6;
	hanshu(&x, &y, a, b, theta);
	cout << x << y << endl;
	hanshu(&x1, &y1, a, b, theta);
	cout << x1 << y1 << endl;
	hanshu(&x2, &y2, a, b, theta);
	cout << x2 << y2 << endl;


}