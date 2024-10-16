#include<iostream>
 using namespace std;
 int decimal_to_binary(int n){
    int ans=0,pow=1;
    while(n>0){
       int remainder=n%2;
       n=n/2;

       ans=ans+(remainder*pow);
       pow=pow*10;
    }
    return ans;
 }
 int main(){
   for (int i = 1; i <=10; i++)
   {
          cout<<decimal_to_binary(i)<<endl;
   }
   
     return 0;
       
   }
