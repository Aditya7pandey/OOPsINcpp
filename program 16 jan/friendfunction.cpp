#include<iostream>
using namespace std;

class complex{
    int real,imag;
    public:

    void setNumber(int a,int b){
        real = a;
        imag = b;
    }

    friend complex sumComplex(complex o1,complex o2); // friend function 

    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

complex sumComplex(complex o1,complex o2){ // declaring outside the friend function
    complex o3;
    o3.setNumber(o1.real+o2.real,o1.imag+o2.imag);
    return o3;
}

int main(){
    complex a, b ,sum;
    a.setNumber(1,2);
    a.display();
    b.setNumber(3,4);
    b.display();

    sum = sumComplex(a,b);
    sum.display();
    return 0;
}