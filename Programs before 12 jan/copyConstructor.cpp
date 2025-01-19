#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
    A(int a,int b){
        this->a = a;
        this->b = b;
    }
    A(A &obj){
        a = obj.a;
        b = obj.b;
    }
    void show(){
        cout<<"The value of A is "<<a<<" and b is "<<b<<endl;
    }
};

int main(){
    A obj(10,20);
    A obj1 = obj;
    obj1.show();
    return 0;
}