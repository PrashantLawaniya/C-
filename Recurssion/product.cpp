#include<iostream>
 using namespace std;
 void product(int n,int p){
    if(n==0){
        cout<<p<<endl;
        return;
    }
    product(n-1,n*p);
    return;
 }
 int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    product(n,1);
 }