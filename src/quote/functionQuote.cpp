//
// Created by mayn on 2023/11/1.
//
#include <iostream>
using namespace std;

int & test(){
    static int a = 10;
    return a;
}


int main222222(){
    int a = 10;
    int b = 20;
//    下面的代码相当于 int * const res = &b
    int &res = b;
//    赋值语句相当于 *res = 30
    res = 30;
    cout<<"res: "<<res<<endl;
    return 0;
}