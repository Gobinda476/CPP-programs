#include<iostream>
using namespace std;

int maze2(int row,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays = maze2(row,col-1); //right
    int downWays = maze2(row-1,col);  //down
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main(){
    cout<<maze2(3,3)<<endl;
    return 0;
}