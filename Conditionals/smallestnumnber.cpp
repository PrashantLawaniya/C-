 #include<iostream>
 using namespace std;
 int main(){
    int x,y,z;
    cout<<"enter the number x"<<endl;
    cin>>x;
    cout<<"enter the number y"<<endl;
    cin>>y;
    cout<<"enter the number z"<<endl;
    cin>>z;
    if (x<y && x<z) {
         cout<<x<< " is smallest number";
    }else if(y<x && y<z) {
        cout<<y<< " is smallest number";
} else{
     cout<<z<< " is smallest number";
}
 }