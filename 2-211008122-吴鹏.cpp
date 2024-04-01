#include <iostream>
#include <cmath>

#define wupeng 3.14

using namespace std;

void bianhuan(double* x, double* y, double a, double b, double theta, double *resultx, double* resulty) {
	theta = (wupeng / 2) - atan(2);
	for (int i = 0;i < 3; i++) {
		resultx[i] = x[i] * cos(theta) + y[i] * sin(theta) ;
		resulty[i] = y[i] * cos(theta) - x[i]  * sin(theta)  ;
	}



}

int main() {
	double x[3] = { 0 };
	x[0] = 10;
	x[1] = 30;
	x[2] = 20;
	double y[3] = { 0 };
	y[0] = 10;
	y[1] = 10;
	y[2] = 25;
	double a = 0;
	double b = 1;
	double theta = 0;
	double resultx[3] = { 0 };
	double resulty[3] = { 0 };
	bianhuan(x, y, a, b, theta, resultx, resulty);
	//theta = wupeng - atan(2);


	for (int i = 0;i < 3; i++) {
		cout << "吴鹏" << resultx << endl;
		cout << "吴鹏" << resulty << endl;

	}
	return 0;
}