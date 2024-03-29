#include<iostream>
using namespace std;
int main(){
    // int *ptr = NULL; //reserved address
    // cout<<ptr<<endl;  // 0
    // cout<<&ptr<<endl; // 0x61ff0c

    // int *ptr = 0;
    // cout<<ptr<<endl;  // 0
    // cout<<&ptr<<endl; // 0x61ff0c

    // int *ptr = '\0';
    // cout<<ptr<<endl;  // 0
    // cout<<&ptr<<endl; // 0x61ff0c

    //combined code(same thing written above,,, in different way)
    int *ptr1 = NULL; //reserved address
    int *ptr2 = 0;
    int *ptr3 = '\0';
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl;
}