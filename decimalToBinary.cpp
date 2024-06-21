#include<bits/stdc++.h>
using namespace std;

string decimal_to_binary(int num){
    string result = "";
    while(num>0){
        if(num%2==0){
            //even
            result = "0" + result;
        }
        else{
            //odd
            result = "1" + result;
        }
        num = num / 2;
    }
    return result;
}
int main(){
    int num = 12;
    cout<<decimal_to_binary(num)<<endl;
    return 0;
}