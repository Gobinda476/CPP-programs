#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,4,5,6,9,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low) / 2;
        if(arr[mid]==mid) low = mid + 1;
        else{
            ans = mid;
            high = mid - 1;
        }
    }
    cout<<ans<<endl;
}