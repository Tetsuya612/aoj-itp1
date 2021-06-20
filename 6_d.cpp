#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, m;
    int a[100][100];
    int b[100], c[100];

    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for(int k=0; k<m; k++){
        cin >> b[k];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            c[i] += a[i][j] * b[j];
        }
    }

    for(int i=0; i<n; i++){
        cout << c[i] << endl;
    }
    return 0;
}