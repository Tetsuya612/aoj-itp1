#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x, y;
    x = abs(x1-x2);
    y = abs(y1-y2);
    int x3, y3, z;
    x3 = pow(x, 2);
    y3 = pow(y, 2);
    z = x3 + y3;
    cout << sqrt(z) << endl;
}