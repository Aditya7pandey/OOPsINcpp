#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("abc.txt");
    ofstream fout;
    fout.open("xyz.txt");
    char c;
    fin>>c;
    while(!fin.eof()){
        fout<<c;
        fin>>c;
    }

    fin.close();
    fout.close();

    return 0;
}