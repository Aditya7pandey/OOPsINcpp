#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
    test(){}
    test(int a,int b){
        this->a = a;
        this->b = b;
    }

    void display(){
        cout<<"values are "<<a<<" "<<b<<endl;
    }

    test(test &obj){
        a = obj.a;
        b = obj.b;
    }
};

int main(){
    test aa(2,3);
    test cc(aa);
    cc.display();
    return 0;
}