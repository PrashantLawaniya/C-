 #include<iostream>
 using namespace std;
 void sum(int n,int s){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    sum(n-1,n+s);
    return;
 }
 int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    sum(n,0);
 
 }