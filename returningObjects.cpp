#include<iostream>
using namespace std;

class complex{
    int real,imag;
    public:
    void getData(int real,int imag){
        this->real = real;
        this->imag = imag;
    }

    void printData(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    complex sum(complex c2){
        complex x;
        x.real = real+c2.real;
        x.imag = imag+c2.imag;
        return x;
    }
};



int main(){
    complex a,b,c;
    a.getData(2,3);
    b.getData(4,5);

    c = a.sum(b);
    c.printData();
    return 0;
}