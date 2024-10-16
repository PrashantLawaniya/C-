#include<iostream>
#include<string>
#include <algorithm>   //library for reverse
using namespace std;

 int main(){
  string s="Prashant";
  cout<<s<<endl;
  int n=s.length();
  reverse(s.begin()+1,s.begin()+5);
  cout<<s;
 }