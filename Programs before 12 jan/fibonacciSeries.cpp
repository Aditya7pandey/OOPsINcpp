#include<iostream>
using namespace std;

int printTerm(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return printTerm(n-1)+printTerm(n-2);
}

void printSeries(int n){
    int a = 1;
    int b = 1;

    cout<<a<<" ";
    cout<<b<<" ";
    for(int i = 0;i<n-2;i++){
        int sum = a+b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }
}

int main(){
    int n;
    cout<<"Enter your number "<<endl;
    cin>>n;
    cout<<printTerm(n)<<endl;
    printSeries(n);
    return 0;
}