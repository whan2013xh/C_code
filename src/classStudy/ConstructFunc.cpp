//
// Created by xuhan on 2023/11/8.
//
#include <iostream>
using namespace std;

class Person2{
public:
    //默认无参构造函数
    Person2(){
        cout<<"无参构造函数调用"<<endl;
    }
    Person2(int a){
        age = a;
        cout<<"有参构造函数调用："<<age<<endl;
    }
    //拷贝构造函数，注意参数必须是const的并且是传入引用，是因为不能对传入的对象进行修改，所以必须是const
    Person2(const Person2 &a){
        //将传入对象所有参数拷贝到本对象上
        age = a.age;
        cout<<"拷贝构造函数调用"<<endl;
    }
    ~Person2(){
        cout<<"析构函数调用, age :"<<age<<endl;
    }
    int age;

};

void test01(){
    //1、括号法
    Person2 p;  //默认参数构造函数
    Person2 p2(10); //有参构造函数
    Person2 p3(p2); //拷贝构造函数调用
    cout<<"p2的年龄："<<p2.age<<endl;
    cout<<"p3的年龄："<<p3.age<<endl;

    //注意事项
    //调用默认构造函数的时候不要加()
    //下面这行代码并不会创建对象，因为下面这行代码编译器会认为是一个函数的声明，不会是在创建对象
    Person2  p4();

    //2、显示法
    Person2 p5;
    Person2 p6=Person2(20);
    Person2 p7=Person2(p6);
    Person2(30);  //匿名对象, 特点：当前行执行结束后，系统会立即回收掉匿名对象；
    cout<<"aaaa"<<endl;
    //注意事项2
    //不要利用拷贝构造函数初始化匿名对象
    //Person2(p3); //这行代码会报错，因为Person2(p3)等价于 Person p3;

    //3、隐式转换法
    Person2 p8=100;  //等价于 Person2(100),有参构造
    Person2 p9=p8;   //拷贝构造，等价于 Person2(p8)



}

int main2222222222(){
    test01();
    return 0;
}