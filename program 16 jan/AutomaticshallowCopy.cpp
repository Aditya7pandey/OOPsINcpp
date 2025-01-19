#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
    
    test(){}

    void setData(int a ,int b){
        this->a = a;
        this->b = b;
    }

    void show(){
        cout<<"value is "<<a<<" "<<b<<endl;
    }
};

int main(){
    test aa;
    aa.setData(3,4);
    aa.show();
    test bb = aa;
    bb.show();
    return 0;
}