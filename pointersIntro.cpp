#include<iostream>
using namespace std;
int main(){
    // int x = 4;
    // int *p = &x;
    // cout<<&x<<endl; //0x61ff08
    // cout<<p<<endl;  //0x61ff08

    // float x = 4.9;
    // float *p = &x;
    // cout<<&x<<endl;
    // cout<<p<<endl;

    // bool x = true;
    // bool *p = &x;
    // cout<<&x<<endl; //0x61ff0b
    // cout<<p<<endl;  //0x61ff0b

    int x = 4;
    int *p = &x;
    int y = 9;
    int *p2 = &y;
    cout<<p<<endl;  //0x61ff04
    cout<<p2<<endl; //0x61ff00

}