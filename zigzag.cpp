#include<iostream>
using namespace std;

void zigzag(int n){
    if(n==0) return;
    cout<<n;
    zigzag(n-1);
    cout<<n;
    zigzag(n-1);
    cout<<n;
}
int main(){
    zigzag(1);
    cout<<endl;
    zigzag(2);
    cout<<endl;
    zigzag(3);
    cout<<endl;
    zigzag(4);
}