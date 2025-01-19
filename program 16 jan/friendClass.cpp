#include<iostream>
using namespace std;

class complex;

class calculator{
    public:
    int add(int a ,int b){
        return (a+b);
    }

    int sumReal(complex,complex);
    // int sumReal(complex o1,complex o2){
    //     // complex o3;
    //     // o3.real = o1.real+o2.real;
        
    // } 
};

class complex{
    int real,imag;
    friend int calculator :: sumReal(complex,complex);
    public:
    void setNumber(int real,int imag){
        this->real = real;
        this->imag = imag;
    }

    void display(){
        cout<<"value is "<<real<<" + "<<imag<<"i"<<endl;
    }
};

int calculator :: sumReal(complex o1,complex o2){
    return o1.real+o2.real;
};

int main(){
    complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(3,4);
    calculator calc;
    o1.display();
    o2.display();
    int res = calc.sumReal(o1,o2);
    cout<<res<<endl;
    return 0;
}