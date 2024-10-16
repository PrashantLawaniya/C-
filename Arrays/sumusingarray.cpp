#include<iostream>
 using namespace std;
 
 int main(){
    int sum=0,arr[]={3,5,6,4,5};
    for (int i = 0; i <sizeof(arr)/4; i++)
    {
        sum+=arr[i];
    }
      cout<<sum;
   
   }
