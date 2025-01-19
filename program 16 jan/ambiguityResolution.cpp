#include<iostream>
using namespace std;

class base1{
    public:
    void greet(){
        cout<<"How are you "<<endl;
    }
};

class base2{
    public:
    void greet(){
        cout<<"kaise ho"<<endl;
    }
};

class derived : public base1,public base2{
    public:
    void greet(){
        base2 :: greet();
    }
};

int main(){
    // base1 obj;
    // obj.greet();
    // base2 obj2;
    // obj2.greet();
    derived obj3;
    obj3.greet();
    return 0;
}