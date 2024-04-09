#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; //you need not require to mention the size
    //for inserting elements // input ---> do not use []
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    // cout<<v[0]<<" "; //6
    // cout<<v[1]<<" "; //1
    // cout<<v[2]<<" "; //9
    // cout<<v[3]<<" "; //0
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; // printing in the next line
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}