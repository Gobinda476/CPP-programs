#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[] = {"0123","0023","456","00182","940","002901"};
    int max = stoi(arr[0]);
    string maxS = arr[0];
    for(int i=1;i<=5;i++){
        int x = stoi(arr[i]);
        if(x>max){
            max=x;
            maxS=arr[i];
        }
    }
    cout<<max<<" "<<maxS<<endl; // here max is integer but maxS is the string.
}