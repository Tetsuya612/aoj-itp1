#include <iostream>
#include <string>
using namespace std;

int main(){
    int m[50], f[50], r[50];

    for(int i=0; i<50; i++){
        cin >> m[i] >> f[i] >> r[i];
        if(m[i]==-1 && f[i]==-1 && r[i]==-1){
            break;
        }
    }

    for(int i=0; i<50; i++){
        if(m[i]==-1 && f[i]==-1 && r[i]==-1){
            break;
        }
        if(m[i]==-1 || f[i]==-1 || m[i]+f[i]<30){
            cout << "F" << endl;
        }else if(m[i]+f[i]>=80){
            cout << "A" << endl;
        }else if(m[i]+f[i]>=65 && m[i]+f[i]<80){
            cout << "B" << endl;
        }else if(m[i]+f[i]>=50 && m[i]+f[i]<65){
            cout << "C" << endl;
        }else if(m[i]+f[i]>=35 && m[i]+f[i]<50){
            if(r[i]>=50){
                cout << "C" << endl;
            }
            cout << "D" << endl;
        }
    }
    return 0;
}