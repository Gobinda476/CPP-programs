#include<iostream>
using namespace std;
int main(){
    int n; // n = number of rows.
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}