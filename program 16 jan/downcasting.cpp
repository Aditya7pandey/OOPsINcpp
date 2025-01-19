#include<iostream>
using namespace std;

class base{
    public:
    int a;
    void display(){
        cout<<a<<endl;
    }
};

class derived : public base{
    public:
    int b;
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

int main(){
    base obj;
    derived *dptr;
    // dptr = (derived *)obj;
    return 0;
}