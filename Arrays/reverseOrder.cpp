#include<iostream>
 using namespace std;
 
 int main(){
   int a[]={2,3,62,22,4,33,74,66};
   int n=sizeof(a)/4;
   int b[n];
   for (int i = 0; i<n; i++)
   {
        b[i]=a[n-1-i];
        cout<<b[i]<<" ";
   }
   
 }
