#include<iostream>
using namespace std;

template<class T>

void multiply(T a,T b){
    cout<<"value is "<<a*b;
}

int main(){
    int a ,b;
    cin>>a;
    cin>>b;
    multiply(a,b);
    return 0;
}