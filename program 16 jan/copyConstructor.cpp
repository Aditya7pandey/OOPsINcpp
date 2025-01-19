#include<iostream>
using namespace std;

class Test{
    int x,y;
    public:
    Test(){}
    void setData(int x,int y){
        this->x = x;
        this->y = y;
    }

    void show(){
        cout<<x<<" "<<y<<endl;
    }

    Test(Test & obj){
        x = obj.x;
        y = obj.y;
    }
};

int main(){
    Test aa;
    aa.setData(2,3);
    Test bb(aa);
    bb.show();    
    return 0;
}