#include<iostream>
using namespace std;

class emp{
    int emp_salary;
    char emp_name[50];
    public:
    void input(){
        cout<<"enter employee detail"<<endl;
        cout<<emp_name<<emp_salary;
    }

    void show(){
        cout<<emp_salary<<endl;
        cout<<emp_name<<endl;
    }
};

int main(){
    emp obj[3];
    for(int i =0;i<3;i++){
        obj[i].input();
    }

    for(int i =0;i<3;i++){
        obj[i].show();
    }
    return 0;
}