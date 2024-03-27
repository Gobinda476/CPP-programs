/* Take float input and print the fractional part of the real number */
#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    int y = (int)x;
    if(y<0){
        y=y-1;
    }
    cout<<x<<endl;
    return 0;
}