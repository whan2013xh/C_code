//
// Created by mayn on 2023/11/5.
//
#include <iostream>
using namespace std;

struct Person{
    int age;
};

class Person2{
    int age;
};

int main2222(){
    Person p1;
    p1.age = 10;

    Person2 p2;
//    p2.age=20;   // 报错，因为是私有权限
}