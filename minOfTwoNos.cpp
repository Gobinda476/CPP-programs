#include<iostream>
using namespace std;
int mini(int x,int y){
    int a;
    if(x<y) a=x;
    else a=y;
    return a;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<mini(x,y);

    return 0;
}