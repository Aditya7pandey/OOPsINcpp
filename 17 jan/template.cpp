#include<iostream>
using namespace std;

template<class T>

class show{
    T a ,b;
    public:
    void setData(T p, T q){
        a = p;
        b = q;
    }

    void display(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
};

int main(){
    show <int> ob;
    ob.setData(2,3);
    ob.display();

    show <char> obc;
    obc.setData('cd','hd');
    obc.display();
    return 0;
}