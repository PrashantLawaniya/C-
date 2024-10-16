 #include<iostream>
 using namespace std;
 int main(){
    int cp;
    cout<<"enter the costprice : ";
    cin>>cp;
    int sp;
    cout<<"enter the selling price : ";
    cin>>sp;
    if (cp>sp) {
         cout<<"Seller made loss of : "<<cp-sp;
    } else if(cp==sp){
          cout<<"No profit or loss";
    } else{
         cout<<"Seller made profit of : "<<sp-cp;;
         
    }
 }