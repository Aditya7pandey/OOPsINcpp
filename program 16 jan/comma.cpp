#include<iostream>
using namespace std;

class MyClass{
    int x;
    public:
    MyClass(int value):x(value){}

    void setData(int x){
        this->x = x;
    }

    MyClass operator,(const MyClass&obj){
        return MyClass(x + obj.x);
    }

    void display(){
        cout<<x<<endl;
    }
};

int main(){
    MyClass obj(2),obj1(3),obj3(45);
    MyClass result = (obj,obj1,obj3);
    result.display();
    return 0;
}