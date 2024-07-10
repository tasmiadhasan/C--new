#include<stdio.h>
#include <conio.h>
#include <string.h>
struct obj{
        int age;
        char name[50];
    };
int main(){
    struct obj one;
    one.age=21;
    strcpy(one.name,"Rahul");
    printf("Name: %s\nAge: %d",one.name,one.age);
    getch();

}