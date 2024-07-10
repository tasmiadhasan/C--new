#include<iostream>
#include<conio.h>
using namespace std;

class myclass{
    public:
    int age;
    string name;
};


int main(){
    myclass obj;
    obj.age=20;
    obj.name="John";
    cout<<"Name: "<<obj.name<<endl;
    cout<<"Age: "<<obj.age;
    getch();
}