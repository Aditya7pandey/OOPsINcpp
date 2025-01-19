#include<iostream>
using namespace std;

template<class T>

class show{
    T a, b;
    public:
    show(T p,T q){
        a = p;
        b = q;
    }

    void display(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
};

int main(){
    show <int> ob(2,4);
    show <char> ob1('a','d');
    ob.display();
    ob1.display();
    return 0;
}