#include<iostream>
using namespace std;
// stair path using 2 jumps using recursion
int stair(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return stair(n-1)+stair(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<stair(n)<<endl;
    return 0;
}