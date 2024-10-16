 #include<iostream>
 using namespace std;
 int main() {
    int x,y;
    cout<<"enter the value of x: ";
    cin>>x;
    cout<<"enter the value of y: ";
    cin>>y;
    if(x>0 and y>0){
         cout<<x<<" and "<<y<<" lies on first quadrant";
    }
    else if(x<0 and y<0){
         cout<<x <<" and "<<y<<" lies on third quadrant";
     }else if(x<0 and y>0){
         cout<<x <<" and "<<y<<" lies on second quadrant";
     }else if(x>0 and y<0){
         cout<<x <<" and "<<y<<" lies on fouth quadrant";
     }else if(x==0 and y==0){
         cout<<x <<" and "<<y<<" lies on Origin";
     }else if(x>0 and y==0){
         cout<<x <<" and "<<y<<" lies on the x plane";
     }
 else if(x==0 and y>0){
         cout<<x <<" and "<<y<<" lies on the y plane";
 }else if(x==0 and y<0){
         cout<<x <<" and "<<y<<" lies on the Negative y plane";
 } else {
         cout<<x <<" and "<<y<<" lies on the negative x plane";
 }
 }
 
 
 