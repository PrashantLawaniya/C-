 #include<iostream>
 using namespace std;
 int main(){
  int m;
  cout<<"enter the m : ";
  cin>>m;
  
  for (int i = 1; i <=m; i++)
  {
    
    for (int j = 1; j <=m;j++)  
    {    
       if(j==i or j==(m+1-i) )
       cout<<"*"<<" ";
      else           
      cout<<" "<<" ";
    }
      cout<<endl;
  }
  
   
 }