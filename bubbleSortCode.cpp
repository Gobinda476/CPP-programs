#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //bubble Sort
    for(int i=0;i<n-1;i++){
        //traverse
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){ //swap
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}