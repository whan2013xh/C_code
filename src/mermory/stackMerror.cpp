//
// Created by xuhan on 2023/10/23.
//
#include <iostream>
using namespace std;

int* func(){
    int a=10;
    return &a;
}

int main555555(){
    int *p=func();

    cout<<"*p:"<<*p<<endl;
    cout<<"*p:"<<*p<<endl;
}