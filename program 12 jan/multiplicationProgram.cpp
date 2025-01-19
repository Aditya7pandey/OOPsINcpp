#include<iostream>
using namespace std;

template<class t>
void multiplication(t a,t b){
    cout<<"value is "<<a*b<<endl;
}

int main(){
    // integers
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    multiplication(a,b);
    // floating

    float m,n;
    cout<<"enter floating values of m and n"<<endl;
    cin>>m;
    cin>>n;
    multiplication(m,n);

    // divison
    double x,y;
    cout<<"enter double values of m and n"<<endl;
    cin>>x;
    cin>>y;
    multiplication(x,y);
    return 0;
}