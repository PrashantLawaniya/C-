 #include<iostream>

 using namespace std;
 
 int main(){
    int x=3;
    int* p=&x;
   cout<<x<<endl;
   *p=342;
   cout<<x<<endl;

 }