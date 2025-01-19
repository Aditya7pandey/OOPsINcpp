#include<iostream>
using namespace std;

// Inline functions are used to calculate faster as they use cache memory for calculating
// It can't be bigger functions should be smaller

inline int area(int length,int breadth){
    return length*breadth;
}

int main(){
    cout<<area(2,4);
    return 0;
}