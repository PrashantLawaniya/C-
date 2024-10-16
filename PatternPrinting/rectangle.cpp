 #include<iostream>
 using namespace std;
 int main(){
  int m;
  cout<<"enter the m";
  cin>>m;
  int n;
  cout<<"enter the n";
  cin>>n;
  for (int i = 1; i <=m; i++)  //for rows
  {
    for (int j = 1; j <=n;j++)  //for columns
    {
        cout<<"* ";
    }
      cout<<endl;
  }
  
   
 }