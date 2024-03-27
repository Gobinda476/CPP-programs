#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the character : ";
    char ch;
    cin>>ch;
    int ascii = (int)ch;
    if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122){
        cout<<"The character is alphabet";
    }
    else{
        cout<<"The character is not alphabet";
    }
    return 0;
}