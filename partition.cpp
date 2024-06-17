#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,1,12,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    //formation of prefix sum
    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }
    //check if any x exists
    bool flag = false;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<"Yes it can be partitioned"<<endl;
    else cout<<"No it cannot be partitioned"<<endl;
}