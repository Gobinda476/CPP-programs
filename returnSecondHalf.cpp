#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    //abcdefgh -> n=8
    int n = str.length();
    cout<<str.substr(n/2);
}