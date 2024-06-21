#include<bits/stdc++.h>
using namespace std;

int binary_to_decimal(string &binary){
    int n = binary.size();
    int result = 0;
    for(int i=n-1;i>=0;i--){
        char ch = binary[i];
        int num = ch - '0';
        result = result + num * (1 << (n-i-1)); // 1<<x -> pow(2,x)
    }
    return result;
}
int main(){
    string binary = "00001011";
    cout<<binary_to_decimal(binary)<<endl;
    return 0;
}