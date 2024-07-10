#include<iostream>
#include<conio.h>
using namespace std;
class multi{
    public:
    int age;
    string name;
    void disp(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    multi one;
    one.age=21;
    one.name="John";
    one.disp();
    multi two;
    two.age=22;
    two.name="Doe";
    two.disp(); 
    getch();
}