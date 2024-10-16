 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    //GP--> 1 2 4 8 16 32
    // *2*2...
    int a=3;
    for (int i = 1; i <=n; i++){
       cout<<a<<" ";
       a=a*4;
    }
 
 }