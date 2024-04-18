#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s); // GOBinda
    sort(s.begin(),s.end()); // sorts as per ascii value order.
    cout<<s<<endl;  // BGOadin
}