#include<iostream>
using namespace std;

void print(int num){ // comes under compile time polymorphism
    cout<<"value is "<<num<<endl;
}

void print(string str){
    cout<<"value is "<<str<<endl;
}

int main(){
    print(2);
    // print("hello");
    return 0;
}