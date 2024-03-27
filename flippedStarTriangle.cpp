#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //stars
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/*
//Alternate code(my own approach)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)<=n) cout<<" "; //spaces
            else cout<<"*"; //print stars when (i+j)>=n+1
        }
        cout<<endl;
    }
    return 0;
}
*/