#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,3,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    //Selection Sort
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int minIndex = -1;
        //minimum element calculation
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}