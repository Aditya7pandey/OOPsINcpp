#include<iostream>
using namespace std;

class A{
    int data1;
    int data2;
    public:
    A(int data1,int data2 = 9){
        this->data1 = data1;
        this->data2 = data2;
    }

    void printData(){
        cout<<data1<<endl;
        cout<<data2<<endl;
    }
};

int main(){
    A obj(2);
    obj.printData();
    return 0;
}