#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    int second_max = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    for(int i=0;i<=n-1;i++){
        if(second_max<arr[i] && arr[i]!=max){
            second_max = arr[i];
        }
    }
    cout<<second_max;
}