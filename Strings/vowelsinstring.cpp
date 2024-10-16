  #include<iostream>
 using namespace std;
 int main(){
    string s="Prashant Lawaniya";
    int count=0;
    for (int i = 0; i <s.length(); i++)
    {
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' ){
        count++;
        }
    }
    cout<<count;
 }