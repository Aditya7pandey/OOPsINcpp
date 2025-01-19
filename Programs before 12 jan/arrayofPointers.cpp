#include<iostream>
using namespace std;

int main(){
    int *ptrArray[5];
    for(int i =0;i<5;i++){
        ptrArray[i]= new int;
    }
    for(int i =0;i<5;i++){
        *ptrArray[i] = 1;
    }
    cout<<"Values in the array"<<endl;
    for(int i =0;i<5;i++){
        cout<<*ptrArray[i];
    }

    for(int i = 0;i<5;i++){
        delete ptrArray[i];
    }
    return 0;
}