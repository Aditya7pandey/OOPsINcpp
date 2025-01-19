#include<iostream>
#include<cstring>
using namespace std;

class X{
    protected:
    char arr1[100];
    public:
    void setData1(const char* input){
        strcpy(arr1,input);
    }

    void display1(){
        cout<<arr1<<endl;
    }
};

class Y{
    protected:
    char arr2[100];
    public:
    void setData2(const char* input){
        strcpy(arr2,input);
    }
    void display2(){
        cout<<arr2<<endl;
    }
};

class Z : public X,public Y{
    protected:
    char arr3[100];
    public:
    void concatinateStrings(){
        strcpy(arr3,arr1);
        strcat(arr3,arr2);
    }
    void display(){
        cout<<arr3<<endl;
    }
};

int main(){
    Z obj;
    obj.setData1("hello");
    obj.setData2(" World");
    obj.concatinateStrings();
    obj.display();
    return 0;
}