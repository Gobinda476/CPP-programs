#include<iostream>
using namespace std;
int a=9;
void f(){
    cout<<a;
}
int main(){
    cout<<a<<endl;
    int a=2;
    cout<<a<<endl;
    f();

    return 0;
}