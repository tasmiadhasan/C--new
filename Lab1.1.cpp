#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter array size:";
    cin>>size;
    int *arr=new int [size];
    for(int i=0;i<size;i++){
        cout<<"Enter the value "<<i+1<<":";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<"Value "<<i+1<<":"<<arr[i]<<endl;
    }
    delete[] arr;
}