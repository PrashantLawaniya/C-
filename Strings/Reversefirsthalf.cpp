#include<iostream>
#include<string>
#include <algorithm>   //library for reverse
using namespace std;

 int main(){
  string s="Prashant";
  cout<<s<<endl;
  int n=s.length();
  reverse(s.begin(),s.begin()+n/2);


 
 
        //or


//   int i=0;
//   int j=n/2-1;
//   while (i<j)
//   {
//       char temp=s[i];
//       s[i]=s[j];
//       s[j]=temp;
//       i++;
//       j--;
//   }
  
  cout<<s<<endl;
 }
 
   