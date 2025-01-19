#include<iostream>
using namespace std;

class demo{
    int x;
    int *p;
    public:

    demo(){
        p = new int;
    }

    demo(int x,int y){
        this->x = x;
        p = new int;
        *p = y;
    }
    
    void display(){
        cout<<x<<endl;
        cout<<*p<<endl;
    }

    demo(demo &obj){
        x = obj.x;
        p = new int;
        *p = *(obj.p);
    }
};

int main(){
    demo obj(34,45);
    demo xx(obj);
    xx.display();
    return 0;
}