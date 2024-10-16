#include<iostream>
 using namespace std;
 //  difference of sum of even indices and sum of odd indices
 int main(){
     int sumeven=0,sumodd=0,arr[]={1,3,0,10,2,5,6};
     for (int i = 0; i <=6 ; i++)
     {
        if(i%2==0)  sumeven+=arr[i];
        else       sumodd+=arr[i];
     }
       cout<<sumeven-sumodd;
    }
