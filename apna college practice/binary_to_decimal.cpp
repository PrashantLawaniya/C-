#include<iostream>
 using namespace std;
 int binary_to_decimal(int n){
    int ans=0,pow=1;
    while(n>0){
       int lastdigit=n%10;
     ans+=(lastdigit*pow);
       n=n/10;
       pow=pow*2;
    }
    return ans;
 }
 int main(){
   
       cout<<binary_to_decimal(110013);
   }
