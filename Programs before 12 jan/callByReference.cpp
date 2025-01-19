#include<iostream>
using namespace std;

void changeValue(int &a){
    a = 6;
}

int main(){
    int a = 5;
    // cout<<a<<endl;
    changeValue(a);
    cout<<a;
    return 0;
}