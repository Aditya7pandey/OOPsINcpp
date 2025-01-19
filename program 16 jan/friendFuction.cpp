#include<iostream>
using namespace std;

class complex{
    int real,imag;
    public:
    void setData(int  real,int imag){
        this->real = real;
        this->imag = imag;
    }

    friend complex sumComplex(complex obj1,complex obj2);
    
    void display(){
        cout<<real<<" + "<<imag<<endl;
    }
};

complex sumComplex(complex obj1,complex obj2){
    complex cc;
    cc.real = obj1.real+obj2.real;
    cc.imag = obj1.imag +obj2.imag;
    return cc;
}

int main(){
    complex aa,bb,cc;
    aa.setData(2,3);
    bb.setData(4,5);
    cc = sumComplex(aa,bb);
    cc.display();
    return 0;
}