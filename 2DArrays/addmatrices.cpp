#include<iostream>
 using namespace std;
 
 int main(){
       int a[5][2]={{2,3},{3,5},{3,4},{3,7},{2,4}};
       int b[5][2]={{1,3},{1,5},{3,4},{3,7},{2,6}};
    int c[5][2];
   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 2; j++)
      {
          c[i][j]=a[i][j]+b[i][j];
      }
         
   }
     for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 2; j++)
      {
          cout<<c[i][j]<<" ";
      }
        cout<<endl; 
   }
 }
