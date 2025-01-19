#include<iostream>
using namespace std;

class demo{
    int x;
    public:
    void setData(int a){
        x = a;
    }
    void getData(){
        cout<<"value of x is "<<x<<endl;
    }
    
    demo operator++(){// for prefix increment
        x = x+1;
    }

    demo operator++(int){ // for postfix operator
        x = x+1;
    }
};

int main(){
    demo aa;
    aa.setData(5);
    aa.getData();
    ++aa;
    aa.getData();
    aa++;
    aa.getData();
    return 0;
}