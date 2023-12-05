#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "cat";
    string sttr = "arc";
    sort(str.begin(),str.end());
    sort(sttr.begin(),sttr.end());
    if(str==sttr) cout<<"true";
    else cout<<"false";
}