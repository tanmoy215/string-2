#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter string : ";
    cin>>str;
    vector<int>v;
    int n = stoi(str);
    while(n!=0){
        int rer = n%10;
        v.push_back(rer);
        n=n/10;
    }
    sort(v.begin(),v.end());
    int m = v.size();
    cout<<"second max number : "<<v[m-2];
}