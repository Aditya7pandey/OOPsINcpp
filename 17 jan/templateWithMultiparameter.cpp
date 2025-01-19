#include<iostream>
using namespace std;

template<class t1,class t2>

class show{
    t1 a;
    t2 b;
    public:
    void setData(t1 a,t2 b){
        this->a = a;
        this->b = b;
    }

    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

int main(){
    show <int,char> obj;
    obj.setData(23,'l');
    obj.display();
    return 0;
}