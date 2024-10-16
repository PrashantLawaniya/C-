 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int product=1;
     while(n!=0){
        int lastdigit=n%10;
        n=n/10;
        product*=lastdigit;
     }
     cout<<product;
 }
    