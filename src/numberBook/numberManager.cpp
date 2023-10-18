//
// Created by xuhan on 2023/10/16.
//
#include <iostream>
using namespace std;

#define MAX 1000

//设计联系人的结构体
struct Person{
    string name;
    int sex;  //1 男 2女
    int age;
    string phone;
    string address;
};

//设计通讯录结构体
struct AddressBook{
    //通讯录中保存联系人数组
    struct Person personArray[MAX];
    int size;

};

//菜单界面
void showMenu(){
    cout<<"*********************************"<<endl;
    cout<<"*****   1、添加联系人         *****"<<endl;
    cout<<"*****   2、显示联系人         *****"<<endl;
    cout<<"*****   3、删除联系人         *****"<<endl;
    cout<<"*****   4、查找联系人         *****"<<endl;
    cout<<"*****   5、修改联系人         *****"<<endl;
    cout<<"*****   6、清空联系人         *****"<<endl;
    cout<<"*****   0、退出通讯录         *****"<<endl;
    cout<<"*********************************"<<endl;
}

void addPerson(AddressBook * abs){
    if(abs->size==MAX){
        cout<<"通讯录已满"<<endl;
        return ;
    }
    else{
        string name;
        cout<<"请输入姓名："<<endl;
        cin>>name;
        abs->personArray[abs->size].name = name;
        int sex;
        while(true){
            cout<<"请输入姓名： 1 男 2女"<<endl;
            cin>>sex;
            if(sex==1||sex==2){
                abs->personArray[abs->size].sex = sex;
                break;
            }
            cout<<"性别输入有误，请重新输入！"<<endl;
        }
        int age;
        cout<<"请输入年龄："<<endl;
        cin>>age;
        abs->personArray[abs->size].age = age;
        string phone;
        cout<<"请输入联系电话："<<endl;
        cin>>phone;
        abs->personArray[abs->size].phone = phone;
        string address;
        cout<<"请输入家庭住址："<<endl;
        cin>>address;
        abs->personArray[abs->size].address = address;
        abs->size += 1;
        system("clear");

    }

};

void printPerson(Person p){
    cout<<"person : "<<p.name<<" "<<p.age<< " "<<p.sex<<" "<<p.phone<<" "<<p.address<<endl;
}

void showPerson(AddressBook *abs){
    if(abs->size==0){
        return;
    }
    for(int i=0;i<abs->size;i++){
        Person p = abs->personArray[i];
        printPerson(p);
    }
    system("clear");
}

int main(){
    AddressBook abs;
    abs.size = 0;
    int select=0;  //创建用户选择输入的变量
    while(true) {
        showMenu();
        cin >> select;

        switch (select) {
            case 1:  //1、添加联系人
                addPerson(&abs);
                break;
            case 2:   //2、显示联系人
                showPerson(&abs);
                break;
            case 3:   //3、删除联系人
                break;
            case 4:   //4、查找联系人
                break;
            case 5:   //5、修改联系人
                break;
            case 6:   //6、清空联系人
                break;
            case 0:   //0、退出通讯录
                cout << "欢迎下次使用" << endl;
//            system("pause");
                return 0;

            default:
                break;

        }
    }
    system("pause");
    return 0;
}