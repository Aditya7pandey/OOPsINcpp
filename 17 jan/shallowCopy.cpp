#include<iostream>
using namespace std;

class demo{
    int a,b;
    public:
    demo(){}

    void setData(int a,int b){
        this->a = a;
        this->b = b;
    }

    void display(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }

    demo(demo &obj){
        a = obj.a;
        b = obj.b;
    }
};

int main(){
    demo aa;
    aa.setData(22,32);
    demo bb(aa);
    bb.display();
    return 0;
}