 #include<iostream>
 using namespace std;
 void print(int n){
    if(n==0)  return;   //base case
    cout<<n<<endl;     //work
    print(n-1);        //call

 }      
 int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    print(n);
 
 }