#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr(5);
    cout<<"enter the input"<<endl;
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }
    
    ofstream fout;
    fout.open("xxx.txt");
    for(int i = 0;i<5;i++){
        fout<<arr[i]<<" ";
    }

    fout.close();
    return 0;
}