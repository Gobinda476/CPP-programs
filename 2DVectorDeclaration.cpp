#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v(3,vector<int>(4,20)); // 3 is the no. of rows and 4 is the no. of columns
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl; // row size
    cout<<v[0].size()<<endl; // column size
}