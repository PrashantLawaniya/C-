  #include<iostream>
 using namespace std;
 int main(){
  string s="Raghav garg";
  for (int i = 0; i <s.length(); i++)
  {
    //  char c='a';
       if(i%2==0)  s[i]='a';
  }
  
 cout<<s;
 }