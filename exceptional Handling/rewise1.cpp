#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream fout;
    fout.open("heloWorld.txt");
    fout<<"I am aditya";
    fout.close();
    return 0;
}