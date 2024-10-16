 #include<iostream>
 using namespace std;
 int main(){
    int x;
    cin>>x;
    char ch;
    cin>>ch;
    int y;
    cin>>y;
    if(ch=='-') cout<<x-y;
    if(ch=='+') cout<<x+y;
    if(ch=='*') cout<<x*y;
    if(ch=='/') cout<<x/y;
 }