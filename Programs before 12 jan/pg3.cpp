#include<iostream>
using namespace std;

class student{
    static int totalStudent;
    int rollNo;
    string name;
    public:

    student(){
        totalStudent++;
    }

    void setData(int rollNo,string name){
        this->rollNo = rollNo;
        this->name = name;
    }

    void getData(){
        cout<<"rollNo "<<rollNo<<" name is "<<name<<endl;
    }

    void printMember(){
        cout<<totalStudent;
    }
};

int student :: totalStudent;

int main(){
    student aa,bb,cc;
    aa.setData(1,"Aditya");
    bb.setData(2,"abhinav");
    cc.setData(3,"bhaskar");
    cc.printMember();
    return 0;
}