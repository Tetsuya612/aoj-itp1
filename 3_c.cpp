#include <iostream>
#include <string>
using namespace std;

int main(){
    int x[10000];
    int y[10000];

    for(int i=0; i<10000; i++){
        cin >> x[i] >> y[i];
        if(x[i]==0 && y[i]==0){
            break;
        }
    }
    for(int i=0; i<10000; i++){
        if(x[i]==0 && y[i]==0){
            break;
        }
        cout << min(x[i], y[i]) << " " << max(x[i], y[i]) << endl;
    }
    return 0;
}