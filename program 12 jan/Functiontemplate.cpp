#include<iostream>
using namespace std;

template<class T>

void show(T a , T b){
    cout<<"a is "<<a<<" b is "<<b<<endl;
}

int main(){
    int a = 2;
    int  b = 6;
    char m = 'a', n ='n';
    show(a,b);
    show(m,n);
    return 0;
}