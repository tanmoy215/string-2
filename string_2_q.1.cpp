#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string str;
   cout<<"enter a string : ";
   cin>>str;
    string s = "";
    s+=str;
    reverse(str.begin(),str.end());
    s+=str;
    cout<<"final ans : "<<s;
}