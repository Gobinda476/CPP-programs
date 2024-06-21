#include<bits/stdc++.h>
using namespace std;

int max_poweR_of2(int n){
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);
    return (n+1)>>1; // return (n+1)/2
}

int main(){
    cout<<max_poweR_of2(24)<<endl;
    return 0;
}