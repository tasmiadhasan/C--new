#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a;
    int b;
    cout<<"Enter value 1:";
    cin>>a;
    cout<<"Enter value 2:";
    cin>>b;
    swap(&a,&b);
    cout<<"afte swapping "<<a<<" value "<<b<<endl;

}