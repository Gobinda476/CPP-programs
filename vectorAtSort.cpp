#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(50);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    // cout<<v[2]<<" "<<v.at(2)<<endl; // 30 30 both v[2] and v.at(2) work in same manner
    // v.at(2) = 90;
    // cout<<v.at(2)<<endl; // 90 ---> prints the updated value 90 and replaced the old value 30

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    //sort
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";   // 20 30 40 50
    }
}