 #include<iostream>
 using namespace std;
 int main(){
  int m;
  cout<<"enter the m";
  cin>>m;
 
  for (int i = 1; i <=m; i++)
  {
    for (int j = 1; j <=i;j++)  
    {
        cout<<m-j+1<<" ";
    }
      cout<<endl;
  }
  
   
 }