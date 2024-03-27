//print all odd numbers between 1 to 100.
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0) continue;
        cout<<i<<endl;
    }
    return 0;
}

//Alternate code
/* for(int i=1;i<=100;i++){
    if(i%2!=0) cout<<i<<endl;
}   */

//Another alternate code
/* for(int i=1;i<=100;i+=2){
    cout<<i<<endl;
}   */