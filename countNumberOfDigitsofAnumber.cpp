#include<iostream>
using namespace std;
int main(){
    int count = 0;
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int a = num;
    while(num>0){
        num/=10;
        count++;
    }
    if(a==0) cout<<"The number of digits of the given number is : "<<1<<endl; //for 0---no of digits=1.
    else cout<<"The number of digits of the given number is : "<<count<<endl;
    return 0;
}