#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream fout;
    fout.open("zoom.txt");
    fout<<"hello world";
    fout.close();
    return 0;
}