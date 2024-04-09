#include<bits/stdc++.h>
using namespace std;
void change(vector<int>a){
    a[0] = 100;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" "; // 100 40 30 20
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(50);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; // 50 40 30 20
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";  // 50 40 30 20
    }
}