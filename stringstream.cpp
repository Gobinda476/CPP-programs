#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str = "Gobinda Prasad Bag";
    stringstream ss(str);
    string temp;
    
    while(ss>>temp){
        cout<<temp<<endl;
    }
}