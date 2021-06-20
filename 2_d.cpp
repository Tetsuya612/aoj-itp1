#include <iostream>
#include <string>
using namespace std;

int main(){
    int w, h, x, y, r;

    cin >> w >> h >> x >> y >> r;
    if(x+r <= w && y+r <= h){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}