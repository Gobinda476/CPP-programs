#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);

    display(v);

    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    display(v);

    
}