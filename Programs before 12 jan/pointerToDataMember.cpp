#include<iostream>
using namespace std;

class demo{
    int x;
    public:
    void input(int x){
        this->x = x;
    }

    void display(){
        cout<<x<<endl;
}
};

int main(){
    demo aa;
    demo *ptr = &aa;
    ptr->input(3);
    ptr->display();

    aa.display();
    return 0;
}