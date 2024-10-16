#include<iostream>
 using namespace std;
int binary(int n){
      int ans=0,power=1;
      while(n>0){
        int lastdigit=n%2;