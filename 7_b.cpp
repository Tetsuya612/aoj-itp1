#include <iostream>
#include <string>
using namespace std;

int main(){
    int n[100], x[100];
    int cnt = 0;

    for(int i=0; i<100; i++){
        cin >> n[i] >> x[i];
        if(n[i]==0 && x[i]==0){
            break;
        }
    }

    for(int a=0; a<100; a++){
        if(n[a]==0 && x[a]==0){
            break;
        }
        for(int i=1; i<n[a]+1; i++){
            for(int j=2; j<n[a]+1; j++){
                if(i==j){
                    break;
                }
                for(int k=3; k<n[a]+1; k++){
                    if(i==k || j==k){
                        break;
                    }
                    if(x[a]==(i+j+k)){
                    cnt++;
                    }
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}