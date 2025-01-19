#include<iostream>
using namespace std;

class test{
    int a;
    int *p;
    public:
    
    test(){
        p = new int;
    }

    test(int x,int y){
        a =x;
        p = new int;
        *p = y;
    }

    test(test &obj){
        a = obj.a;
        p = new int;
        *p = *(obj.p);
    }

    void display(){
        cout<<a<<" "<<*p<<endl;
    }
};

int main(){
    test aa(2,3);
    aa.display();
    test bb(aa);
    bb.display();
    return 0;
}