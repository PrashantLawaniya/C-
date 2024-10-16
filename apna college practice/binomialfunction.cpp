#include<iostream>
 using namespace std;
 
int fact(int n){
      int factorial=1;
      for (int i = 1; i <=n; i++)
      {
          factorial*=i;
      }
      return factorial;
}

int nCr(int n,int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nmr=fact(n-r);

    return fact_n/(fact_r*fact_nmr);
}
 int main(){
   cout<<nCr(8,2);

   }
