#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    int x = 4; // the element whose last index is to be returned.
    int idx = -1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    cout<<idx<<endl; // the last index of element 4 is 5 here that is printed. // 5
}