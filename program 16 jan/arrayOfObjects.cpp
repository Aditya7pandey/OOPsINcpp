#include<iostream>
using namespace std;

class student{
    string name;
    int rollNo;
    public:
    void setData(string name,int rollNo){
        this->name = name;
        this->rollNo = rollNo;
    }

    void display(){
        cout<<"name is "<<name<<endl;
        cout<<"rollNo is "<<rollNo<<endl;
    }
};

int main(){
    student students[3];
    for(int i =0;i<3;i++){
        string name;
        int rollNo;
        cin>>name;
        cin>>rollNo;
        students[i].setData(name,rollNo);
    }

    for(int i = 0;i<3;i++){
        students[i].display();
    }
    return 0;
}