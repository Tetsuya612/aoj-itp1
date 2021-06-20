#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int a[10000];
    int ans = 0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        ans += a[i];
    }
    cout << *min_element(a, a+n) << " " << *max_element(a, a+n) << " " << ans << endl;
}