#include<bits/stdc++.h>
using namespace std;

vector<long long int>factorial(int n){
    vector<long long int>fact(n+1,1);
    int MOD = 1000000000 + 7;
    for(int i=2;i<=n;i++){
        fact[i] = ((i%MOD)*(fact[i-1] % MOD)) % MOD;
    }
    return fact;
}
int main(){
    vector<long long int>result = factorial(25);
    for(int i=0;i<result.size();i++){
        cout<<i<<"!= "<<result[i]<<endl;
    }
    return 0;
}