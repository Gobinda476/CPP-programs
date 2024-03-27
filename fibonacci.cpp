#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a = 1,b = 1,sum = 0;
    for(int i = 1;i <= n-2;i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    cout<<"The nth fibonacci number is : "<<b<<endl;

    return 0;
}