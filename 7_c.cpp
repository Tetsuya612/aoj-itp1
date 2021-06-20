#include <iostream>
#include <string>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    int a[r][c];
    int ans_r[r+1];
    int ans_c[c+1];
    int ans = 0;
    for(int i=0; i<c+1; i++){
        ans_r[i] = 0;
        ans_c[i] = 0;
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            ans_r[i] += a[i][j];
        }
    }
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            ans_c[i] += a[j][i];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << a[i][j] << " ";
            if(j==c-1){
                cout << ans_r[i] << endl;
            }
        }
    }
    for(int k=0; k<c; k++){
        ans += ans_c[k];
        cout << ans_c[k] << " ";
        if(k==c-1){
            cout << ans << endl;
        }
    }
    return 0;
}