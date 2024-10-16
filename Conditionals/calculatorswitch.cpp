 #include<iostream>
 using namespace std;
 int main(){
    int x;
    cin>>x;
    char ch;
    cin>>ch;
    int y;
    cin>>y;
    switch (ch)
    {
        case '+':
                cout<<x+y;
                break;
        case '-':
                cout<<x-y;
                break;
        case '*':
                cout<<x*y;
                break;
        case '/':
                cout<<x/y;
                break;      

        default:
                cout<<"Invalid operator";
                break;
    }
 }