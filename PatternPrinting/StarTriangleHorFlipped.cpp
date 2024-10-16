 #include<iostream>
 using namespace std;
 int main(){
  int m;
  cout<<"enter the m";
  cin>>m;
 
  for (int i = 1; i <=m; i++)  //No of rows=No of columns
  {
    for (int j = 1; j <=m-i+1;j++)  
    {
        cout<<"* ";
    }
      cout<<endl;
  }
  
   
 }