#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fin;
    fin.open("heloworld.txt");
    char c;
    fin>>c;
    while(!fin.eof()){
        cout<<c;
        fin>>c;
    }
    fin.close();
    return 0;
}