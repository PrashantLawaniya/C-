 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"enter the rows and columns";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
    char ch='A'+i-1;                          // FIRST COLUMNS FORMULA THEN INCRESE BY 1
      for (int j = 1; j <=n; j++)
      {
        
        cout<<ch<<" ";
        ch++;
                                       /* A B C
                                          B C D 
                                          C D E*/
        
       
      }
      cout<<endl;
    }
    
    
 }