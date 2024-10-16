 #include<iostream>
 using namespace std;
 int main(){
    int l,area,perimeter;
    cout<<"enter the length of rectangle : ";
    cin>>l;
    int b;
    cout<<"enter the breadth of rectangle : ";
    cin>>b;
    area=l*b;
    perimeter=2*(l*b);
    if (area>perimeter) {
         cout<<"Area is greater than perimeter ";
    } else if(area<perimeter){
          cout<<"Perimeter is greater than area";
    } else{
         cout<<"Area is equal to its perimeter"2
         ;
         
    }
 }