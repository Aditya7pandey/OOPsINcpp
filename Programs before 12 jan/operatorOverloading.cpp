#include<iostream>
using namespace std;

class Demo{
    int a;
    public:
    void setData(int x){
        a = x;
    }
    void getData(){
        cout<<"value is "<<a;
    }

    Demo operator+ (Demo obj){
        Demo cc;
        cc.a = a+obj.a;
        return cc;
    }
};

int main(){
    Demo aa,bb,cc;
    aa.setData(10);
    bb.setData(30);
    cc = aa+bb;
    cc.getData();
    return 0;
}