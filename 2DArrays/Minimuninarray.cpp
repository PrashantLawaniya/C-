#include<iostream>
 using namespace std;
 
 int main(){
       int arr[4][2]={{76,81},{13,100},{82,91},{88,90}};
       int minm=INT_FAST32_MAX;
       for (int i = 0; i < 4; i++)
       {
           for (int j = 0; j < 2; j++)
           {
                 minm=min(minm,arr[i][j]);
           }
           
       }
       
     cout<<minm;

   
 }
