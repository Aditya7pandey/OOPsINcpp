#include<iostream>
using namespace std;

class student{
    protected :
    int name;
    public:
    void dislayName(){
        cout<<name<<endl;
    }
};

class boy : public student{
    protected:
    public:
};

class girl : public student{
    protected:
    public:
};

class male : public boy{
    protected:
    public:
};

class female :public girl{
    protected:
    public:
};

int main(){
    return 0;
}