#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;

    double s, d, l, h;
    double pi = 3.141592653589793238;
    s = (a * b * sin(c/180.0*pi)) / 2.0;
    h = (2.0 * s) / a;
    double e;
    e = pow(a, 2.0) + pow(b, 2.0) + 2.0*a*b*cos(c/180.0*pi);
    d = sqrt(e);
    l = a + b + d;

    cout << s << endl;
    cout << l << endl;
    cout << h << endl;
}