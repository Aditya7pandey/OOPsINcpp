#include<iostream>
using namespace std;

template<class t1 = int,class t2 = float> // default parameters

class numbers{
    t1 a;
    t2 b;
    public:
        numbers(t1 a, t2 b){
            this->a = a;
            this->b = b;
        }
        void display(){
            cout<<"value is "<<a<<endl;
            cout<<"value is "<<b<<endl;
        }
};

int main(){
    numbers<> obj(2,2.3);
    numbers<char,char> obj2('c','d');
    obj.display();
    obj2.display();
    return 0;
}