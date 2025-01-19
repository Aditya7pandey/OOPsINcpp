#include<iostream>
using namespace std;

class demo{
    int a;
    public:
    void setData(int x){
        a = x;
    }

    void getData(){
        cout<<"value of a is "<<a;
    }
};

int main(){
    demo aa,bb;
    bb.setData(2);
    aa = bb;
    aa.getData();
    return 0;
}

