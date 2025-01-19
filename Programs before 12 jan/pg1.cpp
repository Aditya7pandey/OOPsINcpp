#include<iostream>
using namespace std;

class Complex{
    int real,imag;
    public:
    void setData(int x,int y){
        real = x;
        imag = y;
    }
    friend Complex add(Complex obj1,Complex obj2); // making it friend
    void getData(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

Complex add(Complex obj1,Complex obj2){
    Complex c;
    c.real = obj1.real+obj2.real;
    c.imag = obj1.imag+obj2.imag;
    return c;
}

int main(){
    Complex aa,bb,cc;
    aa.setData(2,3);
    bb.setData(4,5);
    cc = add(aa,bb);
    cc.getData();
    return 0;
}

