#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

int main(){
    int x[1000];
    int num;
    for(int i=0; i<1000; i++){
        cin >> x[i];
        if(x[i]==0){
            break;
        }
    }

    for(int i=0; i<1000; i++){
        if(x[i]==0){
            break;
        }
        int dig;
        int sum = 0;
        num = x[i];
        while(num){
            dig = num % 10;
            sum += dig;
            num = num / 10;
        }
        cout << sum << endl;
    }
    return 0;
}