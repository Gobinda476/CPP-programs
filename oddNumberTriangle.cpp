#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j++){
            if(j%2!=0)
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}