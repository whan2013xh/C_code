//
// Created by xuhan on 2023/10/16.
//
#include <iostream>
using namespace std;

enum bits{
    one=1,
    two=2,
    four=4,
    eight=8
};

int main2(){
    bits myflag = bits(2560000000);
    cout<<" enum myflag is :"<<myflag<<endl;
}