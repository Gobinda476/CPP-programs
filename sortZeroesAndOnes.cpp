#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end()); // sort function is directly used here

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}