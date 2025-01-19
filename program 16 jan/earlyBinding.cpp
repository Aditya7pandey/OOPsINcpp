#include<iostream>
using namespace std;

class base{
    public:
    int a;
    void display(){
        cout<<"value is "<<a<<endl;
    }
};

class derived : public base{
    public:
    int b;
    void display(){
        cout<<"value of base is "<<a<<endl;
        cout<<"value of derived is "<<b<<endl;
    }
};

int main(){
    // base * bptr;
    // derived obj;
    // bptr = &obj;
    // bptr->a = 10;
    // bptr->displayBase();

    derived *dptr;
    derived obj2;
    dptr = &obj2;
    dptr->a = 10;
    dptr->b = 20;
    dptr->display();

    return 0;
}