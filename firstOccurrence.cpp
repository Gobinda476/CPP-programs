#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,5,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 5;
    int low = 0;
    int high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = low + (high-low) / 2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true;
                cout<<mid<<endl;
                break;
            }
            else{ // arr[mid-1]==x
                high = mid-1;
            }
        }
        else if(arr[mid]<x) low = mid + 1;
        else high = mid - 1;
    }
    if(flag==false) cout<<-1<<endl;
}