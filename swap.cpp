#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;   // a=4, b=8
    int temp=a;  // temp=4
    a=b;         // a=8 
    b=temp;      // b=4
    cout<<a<<" "<<b;  // 8  4

    return 0;
}