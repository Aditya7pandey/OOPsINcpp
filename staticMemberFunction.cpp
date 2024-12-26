#include<iostream>
using namespace std;

class counting{
    int x;
    static int n; // default value is initalized as 0 automatically
    public:
    void increaseCount(){
        n++;
    }
    void display(){
        cout<<n<<endl;
    }

    static void gettingCount(){
        cout<<n<<endl;
        // cout<<x; // static functions can only have static members
    }
};

int counting :: n; // But you can change it here
// int counting :: n = 1000;

int main(){
    counting x , y;
    x.increaseCount();
    x.increaseCount();
    x.display();

    y.display();
    return 0;
}