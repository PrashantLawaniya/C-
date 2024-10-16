#include<iostream>
 using namespace std;
 
 int main(){
    int product=1,arr[]={1,2,3,4,5};
    for (int i = 0; i <sizeof(arr)/4; i++)
    {
        product*=arr[i];
    }
      cout<<product;
   
   }
