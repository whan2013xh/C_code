//
// Created by xuhan on 2023/11/9.
//
#include <iostream>
using namespace std;

//加号重载


class Persons1{
public:

    int age;
    int height;

    Persons1 operator+( Persons1 &p2){

        age += p2.age;
        height += p2.height;
        return *this;
    }
    //friend Persons1 operator+(Persons1 &p2,Persons1 &p1);
};


void test1111(){
    Persons1 p1;
    p1.age=10;
    p1.height=10;

    Persons1 p2;
    p2.height=10;
    p2.age=10;

    Persons1 p=p1+p2;
}

int main(){
    test1111();
}