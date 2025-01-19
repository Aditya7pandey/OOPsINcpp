#include<iostream>
using namespace std;

class complex{
    int real,imag;
    public:
    complex(){}
    complex(int x,int y){
        real = x;
        imag = y;
    }

    complex operator+ (complex obj){
        complex cc;
        cc.real = real+obj.real;
        cc.imag = imag+obj.imag;
        return cc;
    }

    void display(){
        cout<<real<<"+"<<imag<<endl;
    }
};

int main(){
    complex aa(2,3),bb(3,4),cc;
    cc = aa + bb;
    cc.display();
    return 0;
}