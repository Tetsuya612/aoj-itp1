#include <iostream>
#include <string>
using namespace std;

int main(){
    int s;
    int a, b, c;
    cin >> s;
     
    a = s / 3600;
    b = (s-a*3600) / 60;
    c = s - a*3600 - b*60;
    cout << a << ":" << b << ":" << c << endl;
}