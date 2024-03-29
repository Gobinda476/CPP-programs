#include<iostream>
using namespace std;
int main(){
    // int x = 122;
    // int *p = &x;
    // cout<<*p;  //122

    // int x = 122;
    // int *p = &x;
    // x=90;
    // cout<<*p;    //90

    int x = 122;
    int *p = &x;
    cout<<x<<endl;  //122
    *p = 6;
    cout<<x;        //6
}