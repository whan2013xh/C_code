//
// Created by xuhan on 2023/11/8.
//
#include <iostream>
using namespace std;

class Person3{
public:
    Person3(){
        cout<<"无参构造函数调用"<<endl;
    }
    Person3(int a){
        age = a;
        cout<<"有参构造函数调用："<<age<<endl;
    }
    //拷贝构造函数，注意参数必须是const的并且是传入引用，是因为不能对传入的对象进行修改，所以必须是const
    Person3(const Person3 &a){
        //将传入对象所有参数拷贝到本对象上
        age = a.age;
        cout<<"拷贝构造函数调用"<<endl;
    }
    ~Person3(){
        cout<<"析构函数调用, age :"<<age<<endl;
    }
    int age;

};

//拷贝构造函数的调用时机

//1、使用一个已经创建完毕的对象来初始化一个新对象
void test011(){
    Person3 p1(20);
    Person3 p2(p1);
}

//2、值传递的方式给函数参数传值
void doWork(Person3 p){   //这行代码会进行拷贝构造函数调用

}
void test02(){
    Person3 p;
    doWork(p);
}

//3、值方式返回局部对象,这种方式好像在新版的c++中并不会调用拷贝构造函数，但是确实地址是一样的

Person3 doWork3(){
    Person3 p1;
    cout<<"doWork3 p1:"<<(int *)&p1<<endl;
    return p1;
}

void test03(){
    Person3 p=doWork3();
    cout<<"test03 p:"<<(int *)&p<<endl;
}
int mainzzz(){
    cout<<"test01"<<endl;
    test011();
    cout<<"test02"<<endl;
    test02();
    cout<<"test03"<<endl;

    test03();
    return 0;
}