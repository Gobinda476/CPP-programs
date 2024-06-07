#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {19,12,23,8,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>v(n,0); // 0 means not visited
    int x = 0;
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int minIndex = -1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    minIndex = j;
                }
            }
        }
        arr[minIndex] = x;
        v[minIndex] = 1;
        x++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}