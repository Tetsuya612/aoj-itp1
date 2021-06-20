#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b, c;
    int cnt = 0;

    cin >> a >> b >> c;
    for(int i=a; i<=b; i++){
        if(c%i==0 && i!=1){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}