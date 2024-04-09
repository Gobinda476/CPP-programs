#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,6,1,7};
    int *ptr = arr; //giving address
    // cout<<ptr<<endl; //0x61fef0
    // for(int i=0;i<=4;i++){
    //     cout<<ptr[i]<<" "; // 4 2 6 1 7
    // }
    // cout<<endl;
    // ptr[0]=8;
    // for(int i=0;i<=4;i++){
    //     cout<<ptr[i]<<" "; // 8 2 6 1 7
    //     cout<<i[ptr]<<" "; // 8 2 6 1 7
    //     cout<<i[arr]<<" "; // 8 2 6 1 7
    // }
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" "; // 4 2 6 1 7
        ptr++;
    }
    ptr = arr; // ptr is pointing to the first element
    *ptr = 8; // ptr[0]=8
    ptr++; // ptr is pointing to the second element
    *ptr = 9;
    ptr--; // ptr is pointing to the first element
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" "; // 8 9 6 1 7
        ptr++;
    }
    ptr = arr; // again ptr is pointing to the first element
}