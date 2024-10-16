#include<iostream>
 using namespace std;
int binary(int n){
   int ans=0,power=1;
     while(n>0){
      int lastdigit=n%10;
      ans=ans+(lastdigit*power);

      n=n/10;
      power=power*2;
}
       return ans;
}
 int main(){
   cout<<binary(110010);
   }
