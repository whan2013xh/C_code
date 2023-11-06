//
// Created by mayn on 2023/11/1.
//
#include <iostream>
using namespace std;

int main1111111111(){
    // int &res = 10; 这行代码编译不过去，因为10是一个常量，引用只能指向栈或者堆区
    // 下面这行能正常使用，是因为编译器修改为 int temp=10;const int &res=temp
//    const int &res = 10;
    return 0;
}