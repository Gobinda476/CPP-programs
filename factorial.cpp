#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact = fact * i;
    }
    cout<<"Factorial of the number is : "<<fact<<endl;

    return 0;
}