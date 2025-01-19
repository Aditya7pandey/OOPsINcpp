#include<iostream>
using namespace std;

class demo{
    int a;
    public:
    void getData(int x){
        a = x;
    }
    
    demo operator++ (){
        a = a+1;
    }

    demo operator++ (int){
        a = a+1;
    }

    void display(){
        cout<<a<<endl;
    }
};

int main(){
    demo aa;
    aa.getData(2);
    ++aa;
    aa++;
    aa.display();
    return 0;
}