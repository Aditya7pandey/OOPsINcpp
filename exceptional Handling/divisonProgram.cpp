#include<iostream>
using namespace std;

int main(){
    int a ,b;
    try{
        cin>>a;
    cin>>b;
    if(b == 0){
        throw invalid_argument("can't divide by zero");
    }
    int sum;
    sum = a/b;
    cout<<"Value after divison is "<<sum;
    }

    catch(exception & e){   
        cout<<e.what();
    }
    
    return 0;
}