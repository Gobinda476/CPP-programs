#include<iostream>
using namespace std;
int maxthree(int a,int b,int c){
    int max;
    if(a>b && a>c){
        max=a;
    }
    else if(b>c && b>a){
        max=b;
    }
    else max=c;
    return max;
}
int main(){
    int a=2,b=9,c=7;
    cout<<maxthree(a,b,c);

    return 0;
}