//Sir's approach
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
        for(int k=1;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/*
//Alternate code(my approach)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(((i+j)>=n+1) && ((i+j)<=2*n)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/