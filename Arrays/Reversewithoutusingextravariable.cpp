#include<iostream>
 using namespace std;
 
 int main(){
   int a[]={2,3,62,22,4,33,74,66};
   int n=sizeof(a)/4;
   for (int i = 0; i <n; i++)
   {
       cout<<a[i]<<" ";
   }
   int i=0;
   int j=n-1;
   while (i<j)
   {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
   }
   cout<<endl;
     for (int i = 0; i <n; i++)
   {
       cout<<a[i]<<" ";
   }
   
 }
