#include <iostream>
#include <string>
using namespace std;

int main(){
    int a[20000], b[20000];
    char op[20000];

    for(int i=0; i<20000; i++){
        cin >> a[i] >> op[i] >> b[i];
        if(op[i]=='?'){
            break;
        }
    }
    for(int i=0; i<20000; i++){
        if(op[i]=='?'){
            break;
        }
        if(op[i]=='+'){
            cout << a[i] + b[i] << endl;
        }
        if(op[i]=='-'){
            cout << a[i] - b[i] << endl;
        }
        if(op[i]=='*'){
            cout << a[i] * b[i] << endl;
        }
        if(op[i]=='/'){
            cout << a[i] / b[i] << endl;
        }
    }
    return 0;
}