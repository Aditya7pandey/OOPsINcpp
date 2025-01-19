#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("abc.txt");
    char c;
    fin>>c;
    ofstream fout;
    fout.open("xyz.txt");
    while(!fin.eof()){
        fout<<c;
        fin>>c;
    }
    
    fin.close();
}