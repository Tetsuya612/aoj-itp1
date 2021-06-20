#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, x;
    char a[52]; 
    int b[52], c[52];
    for(int i=0; i<52; i++){
        c[i] = 0;
    }

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]=='S'){
            x = b[i]-1;
            c[x] = 1;
        }
        if(a[i]=='H'){
            x = b[i]-1;
            c[x+13] = 1;
        }
        if(a[i]=='C'){
            x = b[i]-1;
            c[x+26] = 1;
        }
        if(a[i]=='D'){
            x = b[i]-1;
            c[x+39] = 1;
        }
    }
    for(int i=0; i<13; i++){
        if(c[i]==0){
            cout << 'S' << " " << i+1 << endl;
        }
    }
    for(int i=13; i<26; i++){
        if(c[i]==0){
            cout << 'H' << " " << i-12 << endl;
        }
    }
    for(int i=26; i<39; i++){
        if(c[i]==0){
            cout << 'C' << " " << i-25 << endl;
        }
    }
    for(int i=39; i<52; i++){
        if(c[i]==0){
            cout << 'D' << " " << i-38 << endl;
        }
    }
    return 0;
}