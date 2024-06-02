#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display(v,idx+1);
}
int main(){
    int arr[] = {2,1,6,3,9,0,2,7,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    display(v,0);
}