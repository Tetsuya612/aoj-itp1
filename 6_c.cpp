#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int b[200], f[200], r[200], v[200];
    int n1[3][10], n2[3][10], n3[3][10], n4[3][10];
    for(int i=0; i<3; i++){
        for(int j=0; j<10; j++){
            n1[i][j] = 0;
            n2[i][j] = 0;
            n3[i][j] = 0;
            n4[i][j] = 0;
        }
    }

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> b[i] >> f[i] >> r[i] >> v[i];
    }

    for(int i=0; i<n; i++){
        if(b[i]==1){
            n1[f[i]-1][r[i]-1] = v[i];
        }
        if(b[i]==2){
            n2[f[i]-1][r[i]-1] = v[i];
        }
        if(b[i]==3){
            n3[f[i]-1][r[i]-1] = v[i];
        }
        if(b[i]==4){
            n4[f[i]-1][r[i]-1] = v[i];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<10; j++){
            cout << " " << n1[i][j];
            if(j==9){
                cout << "\n";
            }
        }
    }
    cout << "####################" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<10; j++){
            cout << " " << n2[i][j];
            if(j==9){
                cout << "\n";
            }
        }
    }
    cout << "####################" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<10; j++){
            cout << " " << n3[i][j];
            if(j==9){
                cout << "\n";
            }
        }
    }
    cout << "####################" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<10; j++){
            cout << " " << n4[i][j];
            if(j==9){
                cout << "\n";
            }
        }
    }
    return 0;
}