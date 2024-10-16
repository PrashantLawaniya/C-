#include<iostream>
 using namespace std;
 
 int main(){
     int arr[5]={12,2,3,43,53};
     int x=4,count=0;      //greater than the value of x
     for (int i = 0; i <=4 ; i++)
     {
        if(arr[i]>x)  count++;
     }
      cout<<count;

     
    }
