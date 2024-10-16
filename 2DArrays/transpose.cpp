 #include<iostream>
 using namespace std;
 
 int main(){
        int brr[i][j],arr[2][2]={{3,5},{8,5}};
    for (int i = 0; i <2 ; i++)
    {
        for (int j = 0; j <2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for (int j = 0; j<2 ; j++)
    {
        for (int i = 0; i <2; i++)
        {
            brr[i][j]=arr[i][j]<<" ";
        }
      
    } 
     for (int i = 0; i<2 ; i++)
    {
        for (int j = 0; j <2; j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
  
    
     

   
 }
