#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<n<<" is a composite number"<<endl;
            break;
        }
    }
}