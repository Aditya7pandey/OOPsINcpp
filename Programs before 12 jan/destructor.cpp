#include<iostream>
using namespace std;

int count;

class test{
    
    public:
    test(){
        cout<<"Constructor is called"<<endl;
        count++;
    }

    ~test(){
        cout<<"Destructor is called"<<endl;
        count--;
    }
    void value(){
        cout<<count<<endl;
    }
};

int main(){
    test obj;
    obj.value();
    return 0;
}