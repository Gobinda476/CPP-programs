#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int x=1;
    for(int i=n-1;i>=0;i--){
        sum+=arr[i]*x;
        x*=2;
    }
    cout<<"The equivalent decimal number of the given binary number is : "<<sum<<endl;

    return 0;
}