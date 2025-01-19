#include<iostream>
using namespace std;

typedef struct employee{
    int salary;
    int id;
}ep;


union Money{
    char fav;
    int num;
};

int main(){
    Money m1;
    m1.fav = 'c';
    m1.num = 1;
    cout<<m1.fav;

    // struct employee adi;
    // adi.salary = 200000;
    // adi.id = 1;

    // ep harry;
    // harry.salary = 90000;
    // harry.id = 2;

    // cout<<adi.salary<<endl;
    // cout<<harry.salary<<endl;

    return 0;
}