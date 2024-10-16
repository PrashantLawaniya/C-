#include<iostream>
 using namespace std;
 
 int main(){
 int arr[]={1,2,3,4,13,2,1};
 int n=sizeof(arr)/4;
 for (int i = 0; i < n; i++)
 {
      cout<<arr[i]<<" ";
 }
 int i=0;
 int j=n-1;
 while(i<j){
    if(arr[i]!=arr[j]){
        cout<<"not a plaindrome";
        break;
    }

    i++;
    j--;
 }
 if(i>=j){
    cout<<"Plaindrome";
 }
   
 }
