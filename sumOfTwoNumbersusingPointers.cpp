#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *p1 = &x;
    int *p2 = &y;
    cout<<"Enter first number : ";
    cin>>*p1;
    cout<<"Enter second number : ";
    cin>>*p2;
    cout<<"sum of these two numbers using pointers is : "<<*p1 + *p2;

    return 0;
}