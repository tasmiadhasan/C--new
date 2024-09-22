#include<iostream>
using namespace std;
int main(){
    int *numberPtr=NULL, number=20;
    cout<<numberPtr<<endl;//This will print the value for null;
    cout<<number<<endl;
    //this will print the address of the number value
    //if we print *numberptr without giving any value then it will print the garbage value
    numberPtr=&number;
    cout<<numberPtr<<endl;
    cout<<&number<<endl;
    //it will print the address of the numbe value
    //for new value  we just need to put the *pointer sign the use the value which one we want to change but remember that before new vlaue we need to put the address first
    *numberPtr=30;
    cout<<number<<endl;

}