#include<iostream>
using namespace std;

int main(){
    int a,b;
    try{
        cin>>a;
        cin>>b;
        if(b == 0){
            throw invalid_argument("cant divide by 0");
        }
        int result = a/b;
        cout<<result;
    }

    catch(exception & e){
        cout<<e.what();
    }
    return 0;
}