#include<iostream>
using namespace std;

class MyClass{
    int x;
    public:

    MyClass(int value):x(value){}

    void setData(int x){
        this->x = x;
    }

    MyClass operator,(const MyClass &obj){
        return MyClass(x + obj.x);
    }

    void display(){
        cout<<"value is "<<x<<endl;
    }
};

int main(){
    MyClass x(10),y(20),z(30);

    MyClass result = (x,y,z);
    result.display();
    return 0;
}