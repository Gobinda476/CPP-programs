#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,8,9,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i=0;i<n;i++){
        if(i!=arr[i]){
            flag = true;
            cout<<i<<endl;
            break;
        }
    }
     if(flag==false) cout<<-1<<endl;
}