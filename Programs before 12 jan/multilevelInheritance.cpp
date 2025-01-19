#include<iostream>
using namespace std;

class person{
    protected:
    string name;
    // int age;
    public:
    void name(){
        cout<<"Name is "<<name<<endl;
    }
};

class employee : public person{
    protected:
    int salary;
    public:
    void salaryInfo(){
        cout<<"salary is "<<salary<<endl;
    }
};

class manager : public employee{
    public:
    string department;
    manager(string name,int salary,string department){
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work(){
        cout<<"I am leading the department"<<department<<endl;
    }
};

int main(){
    return 0;
}