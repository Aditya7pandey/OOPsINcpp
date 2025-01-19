#include<iostream>
using namespace std;

class complex{
    int real,imag;
    public:
    complex(int real ,int imag){
        this->real = real;
        this->imag = imag;
    }

    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    complex(){}

    complex add(complex obj2){
        complex cc;
        cc.real = real+obj2.real;
        cc.imag = imag+obj2.imag;
        return cc;
    }
};    

int main(){
    complex aa(2,3),bb(3,4);
    complex cc;
    cc = aa.add(bb);
    cc.display();
    return 0;
}