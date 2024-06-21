#include<bits/stdc++.h>
using namespace std;

void findUnique(int *arr,int n){
    int result = 0;
    for(int i=0;i<n;i++) result = result ^ arr[i];
    int temp = result;
    int k = 0;
    while(true){
        if((temp & 1)== 1){
            break;
        }
        temp = temp >> 1;
        k++;
    }
    int retval = 0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        if(((num >> k) & 1) == 1) retval = retval ^ num;
    }
    cout<<retval<<" ";
    result = retval ^ result;
    cout<<result<<endl;
}
int main(){
    int arr[] = {1,2,1,3,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    findUnique(arr,n);
    return 0;
}