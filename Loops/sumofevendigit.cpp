 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int sum=0,lastdigit;
    
     while(n!=0){
          lastdigit=n%10;
            n=n/10;
        if(lastdigit%2==0){
        sum=sum+lastdigit;
        }
     }
     cout<<sum;
 }
    