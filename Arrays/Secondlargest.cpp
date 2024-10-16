#include<iostream>
 using namespace std;
 
 int main(){
    int arr[]={184,262,353,475,547};
    int mx=INT32_MIN;
    for (int i = 1; i <sizeof(arr)/4; i++)
    {
    
        mx=max(mx,arr[i]);
    }
      int smx=INT32_MIN;
   for (int i = 1; i <sizeof(arr)/4; i++)
    {
           if(arr[i]!=mx)   smx=max(smx,arr[i]);
    }
       cout<<smx;
   }
