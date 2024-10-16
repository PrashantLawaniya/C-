//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//     //4 7 10 13 16
//     for (int i = 4; i <=3*n+1; i+=3){
//        cout<<i<<" ";
//     }
 
//  }
  #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    //4 7 10 13 16
    int a=4;
    for (int i = 1; i <=n; i++){
       cout<<a<<" ";
       a+=3;
    }
 
 }