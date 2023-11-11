//
// Created by xuhan on 2023/11/9.
//
#include <iostream>
using namespace std;

class Persons{
public:
    Persons(){
        cout<<"无参构造函数调用"<<endl;
    }
    Persons(int a){
        age =a;
        cout<<"有参构造函数调用"<<endl;
    }
    Persons(const Persons &b){
        age = b.age;
        cout<<"拷贝构造函数调用"<<endl;
    }
    int age;
};

void tests(){
    Persons p;    //如果注释掉上面的无参构造函数和有参构造函数，这行代码就会报错，因为提供了拷贝构造函数就不会提供默认的构造函数了
    Persons p3(10);  //注释掉无参构造函数和拷贝构造函数，这行和下面两行都能执行，因为会提供默认的拷贝构造函数
    Persons p2(p);



}

int main22222222222222(){
    tests();
}