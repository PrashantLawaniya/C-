#include<iostream>
 using namespace std;
 void change(int arr[]){
    arr[2]=323;
 }
 int main(){
    int arr[5]={3,5,6,4,5};  
    for (int i = 0; i<=4; i++)
    {                                     //Arrays pass by reference hote hai
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
    change(arr);

    for (int i = 0; i<=4; i++)
    {
        cout<<arr[i]<<endl;
    }
   }
