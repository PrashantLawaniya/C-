 #include<iostream>
 using namespace std;
 int powerlog(int a,int b){
    if(b==1)  return a;
    if(b%2==0) return powerlog(a,b/2)*powerlog(a,b/2);
    else       return powerlog(a,b/2)*powerlog(a,b/2)*a;
 }
 
 int main(){
  int a;
  cout<<"enter the number :";
  cin>>a;
  int b;
  cout<<"enter the number :";
  cin>>b;
  cout<<powerlog(a,b);
 
 }