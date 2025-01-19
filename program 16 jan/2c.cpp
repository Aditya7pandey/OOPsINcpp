#include<iostream>
#include<cstring>
using namespace std;

class String{
    string name;
    public:
    void setName(string name){
        this->name = name;
    }
    void display(){
        cout<<name<<endl;
    }

    bool operator==(String obj){
        return name == obj.name;
    }
};

int main(){
    String obj1,obj2;
    obj1.setName("Adi");
    obj2.setName("Adix");
    bool c = obj1==obj2;
    if(c == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}