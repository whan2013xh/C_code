//
// Created by xuhan on 2023/10/23.
//

#include <iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

const int c_g_b = 10;

int main4444444444(){
    int a = 10;
    int b=10;

    cout<<"变量a的地址:"<<&a<<endl;
    cout<<"变量b的地址:"<<&b<<endl;

    cout<<"全局变量g_a的地址:"<<&g_a<<endl;
    cout<<"全局变量g_b的地址:"<<&g_b<<endl;

    static int s_a=10;
    static int s_b=10;
    cout<<"静态变量s_a的地址:"<<&s_a<<endl;
    cout<<"静态变量s_b的地址:"<<&s_b<<endl;


    cout<<"全局常量c_g_b的地址:"<<&c_g_b<<endl;

    const int c_l_a = 10;
    cout<<"局部常量c_l_a的地址:"<<&c_l_a<<endl;

}