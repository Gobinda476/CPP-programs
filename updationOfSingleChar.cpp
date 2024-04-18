#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "abc";
    str[1] = 'd';
    cout<<str; // adc

    return 0; 
    // It means in C++, strings are mutable.
}