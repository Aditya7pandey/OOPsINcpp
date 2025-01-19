#include<iostream>
using namespace std;

int main(){
    double balance = 1000.0;
    try{
        double amt;
        cout<<"enter the value of deposit"<<endl;
        cin>>amt;
        balance += amt;
        cout<<"Balance is : "<<balance<<endl;

        double withdral;
        cout<<"enter the value of withdrawl"<<endl;
        cin>>withdral;
        if(withdral<=0){
            throw invalid_argument("Invalid withdrawn amount");
        }
        if(withdral>balance){
            throw runtime_error("Insufficent balance");
        }
        balance -= withdral;
        cout<<"Balance is : "<<balance<<endl;
    }
    
    catch(exception & e){
        cout<<e.what();
    }

    return 0;
}