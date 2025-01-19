#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
    void setValue(int a,int b){
        this->a = a;
        this->b = b;
    }

    friend Complex sumComplex(Complex c1,Complex c2);

    void printValue(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex c1,Complex c2){
    Complex c3;
    c3.setValue(c1.a+c2.a,c1.b+c2.b);
    return c3;
}

int main(){
    Complex a , b ,sum;
    a.setValue(3,4);
    b.setValue(5,6);

    a.printValue();
    b.printValue();

    sum = sumComplex(a,b);
    sum.printValue();
    return 0;
}