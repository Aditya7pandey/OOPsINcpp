#include<iostream>
using namespace std;

class test{
    int x;
    int *p;
    public:

    test(){
        p = new int;
    }

    test(int x,int y){
        this->x = x;
        p = new int;
        *p = y;
    }

    test(test &obj){
        x = obj.x;
        p - new int;
        *p = *(obj.p);
    }

       void display(){
        cout<<x<<" "<<*p;
    }
};

int main(){
    test obj(2,3);
    obj.display();
    test obj2(obj);
    obj2.display();
    return 0;
}
