#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"enter the number"<<endl;;
    cin>>N;

    int* arr = new int[N];

    for(int i =0;i<N;i++){
        cin>>arr[i];
    }

    int min = arr[0];
    for(int i =0;i<N;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }

    cout<<"The value of min element is "<<min;
    delete[] arr;
    return 0;
}