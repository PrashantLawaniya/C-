 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int factorial=1;
    for (int i = 1; i <=n; i++)
    {
        factorial*=i;
         cout<<factorial<<endl;
       
    }

}