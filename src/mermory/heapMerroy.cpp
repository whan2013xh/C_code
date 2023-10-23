//
// Created by xuhan on 2023/10/23.
//

#include <iostream>
using namespace std;

int * func2(){
    int* p = new int(10);
    return p;
}

int main(){
    int *p=func2();
    cout<<*p<<endl;
    cout<<*p<<endl;
    cout<<*p<<endl;
    delete p;
    cout<<*p<<endl;
}