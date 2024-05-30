#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return; //Base Case
    print(n-1); //call
    cout<<n<<endl; //kaam
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(n);
}