 #include<iostream>
 using namespace std;
 void swap(int a,int b){
    int temp=a;
        a=b;          // create another box for variable a and b
        b=temp;
 }
 int main(){
    int a,b;
    cout<<"enter the a";
    cin>>a;
    cout<<"enter the b";
    cin>>b;
    swap(a,b);
    cout<<a<<endl<<b;
 
 }