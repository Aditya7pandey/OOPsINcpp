#include<iostream>
using namespace std;

class String{
    string s;
    public:
    void setData(string s){
        this->s = s;
    }

    void display(){
        cout<<s<<endl;
    }

    bool operator==(String obj){
        return s==obj.s;
    }
};

int main(){
    String aa ,bb;
    aa.setData("adi");
    bb.setData("adi");
    bool c = aa == bb;
    cout<<c;
    return 0;
}