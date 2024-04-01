#include <iostream>
#include <cmath>
#define LiYongJian 3.14
using namespace std;

void pingyixuanzhuan(double* x, double* y, double a, double b, double k, double* resultx, double* resulty) {
    double h;
    double theta;
    h = atan(k);
    theta = LiYongJian / 2 - h;
    for (int i = 0; i < 3; i++) {
        resultx[i] = x[i] * cos(theta) + sin(theta) * y[i] + (a)*cos(theta) + sin(theta) * (b)-a;
        resulty[i] = -x[i] * sin(theta) + cos(theta) * y[i] - (a)*sin(theta) + cos(theta) * (b)-b;
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
    double k = 2;
    double resultx[3] = { 0 };
    double resulty[3] = { 0 };
    pingyixuanzhuan(x, y, a, b, k, resultx, resulty);
    for (int i = 0; i < 3; i++) {
        cout << "LiYongJian" << resultx[i] << endl;
        cout << "LiYongJian" << resulty[i] << endl;
    }
    return 0;
}