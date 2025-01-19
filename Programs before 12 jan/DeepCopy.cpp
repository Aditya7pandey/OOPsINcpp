#include<iostream>
using namespace std;

class DeepCopy{
    int x,*p;
    public:
    DeepCopy(){
        p = new int;
    }
    DeepCopy(int x,int y){
        this->x = x;
        *p = y;
    }
    void showData(){
        cout<<"Value is x "<<x<<" and p is"<<p<<endl;
    }

    DeepCopy(DeepCopy &obj){
        x = obj.x;
        p = new int;
        *p = *(obj.p);
    }
};

int main(){
    DeepCopy obj(2,3);
    obj.showData();
    return 0;
}