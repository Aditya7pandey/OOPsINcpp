#include<iostream>
using namespace std;

class Myclass{
    public:
    int x;

    void * operator new(size_t size){
        void *p = malloc(size);
    }

    void operator delete(void *p){
        free(p);
    }
};