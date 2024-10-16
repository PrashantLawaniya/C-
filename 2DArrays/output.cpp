#include<iostream>
 using namespace std;
 
 int main(){
   int arr[3][3];

   
   arr[0][0]=3;          
    arr[0][1]=2;
     arr[0][2]=1;
      arr[1][0]=5;
       arr[1][1]=4;
        arr[1][2]=8;

for (int j = 0; j < 3; j++)   //rows
{
    for (int i = 0; i < 3; i++)  //colomns
    {
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

    

  

   
 }
