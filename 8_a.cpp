#include <iostream>
#include <string>
using namespace std;

int main(){
   string s;
   char y[1200];
   getline(cin, s);
   
   int x;
   for(int i=0; i<1200; i++){
      if(s[i]==NULL){
         break;
      }
   x = int(s[i]);
   if(x<=90 && x>=65){
      x = x + 32;
   }else if(x<=122 && x>=97){
      x = x - 32;
   }
   y[i] = char(x);
   cout << y[i];
   }
   return 0;
}