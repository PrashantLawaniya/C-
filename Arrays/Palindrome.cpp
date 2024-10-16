#include<iostream>
 using namespace std;
 
 int main(){
   int a[]={1,2,3,11,11,3,2,1};
   int n=sizeof(a)/4;
   for (int i = 0; i <n; i++)
   {
       cout<<a[i]<<" ";
   }
   int i=0;
   int j=n-1;
   while (i<j)
   {
     
        if(a[i]!=a[j]) {
            cout<<"NOT A PALINDROME";
            break;
        }
        i++;
        j--;
       
   }
   if(i>=j)
   cout<<"PALINDROME";


   
 }
