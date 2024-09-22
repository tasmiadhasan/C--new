#include<iostream>
using namespace std;
int main(){
    int m=10;
    int &j=m;
    cout<<"value of m:"<<m<<endl;
    j=18;
    cout<<"value of m:"<<m<<endl;
}