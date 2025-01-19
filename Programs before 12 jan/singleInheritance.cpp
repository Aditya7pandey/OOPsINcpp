#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;
    public:
    Human(string name,int age){
        this->name = name;
        this->age = age;
    }
    void work(){
        cout<<"I am working"<<endl;
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }
};

class Student : public Human{
    int rollNo,fees;
    public:
    Student(string name,int age,int rollNo,int fees) : Human(name,age){
        // this->name = name;
        // this->age = age;
        this->rollNo = rollNo;
        this->fees = fees;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<rollNo<<" "<<fees<<endl;
    }
};

int main(){
    Student obj("harry",50,3,40000);
    obj.work();
    obj.display();
    return 0;
}