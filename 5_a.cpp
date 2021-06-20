#include <iostream>
#include <string>
using namespace std;

int main(){
    int h[300];
    int w[300];
    for(int i=0; i<300; i++){
        cin >> h[i] >> w[i];
        if(h[i]==0 && w[i]==0){
            break;
        }
    }
    
    for(int i=0; i<300; i++){
        if(h[i]==0 && w[i]==0){
            break;
        }
        for(int j=0; j<h[i]; j++){
            for(int k=0; k<w[i]; k++){
                cout << "#";
                if(k==(w[i]-1)){
                    cout << "\n";
                }
            }
            if(j==(h[i]-1)){
                cout << "\n";
            }
        }
    }
    return 0;
}