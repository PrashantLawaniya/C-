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
    if(x>y){
        if(x>z){
            cout<<x<<"is greatest";
        }else{
            cout<<z<<" is greatest";
        }
    }else{
        if(y>z){
            cout<<y<<" is greatest";
        }else{
             cout<<z<<" is greatest";
        }
    }
 }