#include<iostream>
using namespace std;

class demo{
    int x = 0;
    public:
    demo(){
        x++;
    }

    ~demo(){
        x--;
    }
    void display(){
        cout<<x<<endl;
    }
};

int main(){
    demo obj;
    obj.display();
    return 0;
}