#include<iostream>
using namespace std;

template<class t1,class t2>

class show{
    t1 a;
    t2 b;
    public:
    show(t1 a, t2 b){
        this->a = a;
        this->b = b;
    }

    void display(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
};

int main(){
    show <int,char> obj(12,'n');
    obj.display();
    return 0;
}