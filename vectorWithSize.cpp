#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v(5);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";  // 0 0 0 0 0
    // }
    vector<int>v(5,7); // initial size = 5 , each element has value 7
    cout<<v.size()<<endl; // size = 5
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";  // 7 7 7 7 7
    }

}