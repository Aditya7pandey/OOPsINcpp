#include<iostream>
using namespace std;

class myClass{
    int x;
    public:

    myClass(int x){
        this->x = x;
    }

    myClass operator,(const myClass &obj){
        return myClass(x+obj.x);
    }

    void display(){
        cout<<x<<endl;
    }
};

int main(){
    myClass aa(10),bb(10),cc(10);
    myClass result = (aa,bb,cc);
    result.display();
    // cout<<result<<endl;
    return 0;
}