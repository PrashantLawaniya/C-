#include<iostream>
 using namespace std;
 
 int main(){
       int product=1,arr[4][2]={{7,1},{1,1},{2,1},{8,1}};
       for (int i = 0; i < 4; i++)
       {
          for (int j = 0; j < 2; j++)
          {
               product*=arr[i][j];
          }
          
       }
       
   cout<<product;
   
 }
