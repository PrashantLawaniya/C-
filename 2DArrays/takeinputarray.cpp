#include<iostream>
 using namespace std;
 
 int main(){
   int i,j,arr[3][3];
cout<<"enter the 2D Array elements "<<endl;
for (int i= 0; i< 3; i++)   //rows
{
    for (int j = 0; j< 3;j++)  //colomns
    {
        cout<<"arr["<<i<<"]["<<j<<"]=  ";
        cin>>arr[i][j];
    }
}
for (int i = 0; i < 3; i++)   //rows
{
    for (int j = 0; j < 3; j++)  //colomns
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    

  

   
 }
