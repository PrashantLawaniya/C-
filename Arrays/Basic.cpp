#include<iostream>
 using namespace std;
 int main(){
    int arr[5];  //declaration
    cout<<"enter the array elements :";
    for (int i = 0; i <=4; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements are : ";
    for (int i = 0; i <=4; i++)
    {
        cout<<arr[i]<<endl;
    }
    arr[1]=233;
      cout<<"Array elements are : ";
    for (int i = 0; i <=4; i++)
    {
        cout<<arr[i]<<endl;
    }
    
   }
