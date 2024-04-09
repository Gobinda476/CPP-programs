#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(10); //capacity = 1
    v.push_back(20); //capacity = 2
    v.push_back(30); //capacity = 4
    v.push_back(40); //capacity = 4
    v.push_back(50); //capacity = 8
    cout<<v.size()<<endl;      //5
    cout<<v.capacity()<<endl;  //8

    v.pop_back();
    v.pop_back();
    cout<<v.size()<<endl;     //3 = (5-2)
    cout<<v.capacity()<<endl; //8 ---> capacity remains same after pop_back operation
}