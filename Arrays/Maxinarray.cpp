#include<iostream>
 using namespace std;
 
 int main(){
    int arr[]={184,262,353,475,547};
    int mx=arr[0];  //or inplace of arr[0] we also replace it with INT_MIN;
    for (int i = 1; i <sizeof(arr)/4; i++)
    {
        // if(arr[i]>mx)  mx=arr[i];
        mx=max(mx,arr[i]);
    }
      cout<<mx;
   
   }
