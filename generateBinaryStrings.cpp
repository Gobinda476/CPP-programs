#include<iostream>
#include<string>
using namespace std;

void generate(string s,int n){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n);
    generate(s+'1',n);
}
int main(){
    int n = 3;
    generate("",n);
}