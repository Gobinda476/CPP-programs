#include<iostream>
using namespace std;
int main(){
    // cout<<sizeof(int)<<endl;         //4
    // cout<<sizeof(char)<<endl;        //1
    // cout<<sizeof(bool)<<endl;        //1
    // cout<<sizeof(float)<<endl;       //4
    // cout<<sizeof(long long)<<endl;   //8
    // cout<<sizeof(double)<<endl;      //8

    // int x;
    // cout<<&x; //0x61ff0c
     
    //  char x = 's';
    //  cout<<&x; //sC

    // float x = 0.7;
    // cout<<&x;

    int x = 5;
    int y = 5;
    cout<<&x<<endl; //0x61ff0c
    cout<<&y<<endl; //0x61ff08


}