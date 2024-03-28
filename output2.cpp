#include<iostream>
using namespace std;
int a=9;
void f(){
    cout<<a;
}
int main(){
    a=7;
    f();

    return 0;
}