//
// Created by mayn on 2023/11/8.
//
#include <iostream>
using namespace std;


class ConstPerson{
public:
    // this 指针的本质是指针常量，相当于 Person * const this;this的指向不能修改
    // 常函数中隐含的修饰this为常量指针，在常函数中指针指向的值也不能修改
    void showPerson() const{
        //this=NULL; //这行报错，是因为this是指针常量，指向不能修改
        //this->age=10;  //这行代码报错，this指针指向的值也不能修改；
        this->height=10; //这个特殊的属性能修改
        cout<<"showPerson age: "<<age<<" height: "<<height<<endl;
    }

    void show(){
        cout<<"show age: "<<age<<" height: "<<height<<endl;
    }

    int age;
    mutable int height;  //该属性能在常函数中修改,也能在常对象中修改
private:
    mutable int score;
};

void test101(){
    ConstPerson p;
    p.showPerson();
    p.show();
}

void test102(){
    const ConstPerson p{}; //常对象
    p.showPerson();
//    p.age=10;   //常对象不能修改普通属性
    p.height=100;
    //p.score=100; //常对象不能修改private属性
    //p.show();  //p对应的this指针已经被修改为const this所以只能调用常函数，不能调用非常函数
}

int main(){
    test101();
    test102();
    return 0;
}
