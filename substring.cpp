#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abcdef";
    
    //s.substr(idx)
    cout<<s.substr(0)<<endl; // abcdef
    cout<<s.substr(1)<<endl; // bcdef
    cout<<s.substr(2)<<endl; // cdef
    cout<<s.substr(3)<<endl; // def

    //s.substr(idx,length)
    cout<<s.substr(1,3)<<endl; // bcd
    cout<<s.substr(2,2)<<endl; // cd
}