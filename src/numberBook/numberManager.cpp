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
        cout<<"通讯录为空"<<endl;
        return;
    }
    for(int i=0;i<abs->size;i++){
        Person p = abs->personArray[i];
        printPerson(p);
    }
    system("clear");
}

int personIsExist(AddressBook *abs, string name){
    for(int i=0;i<abs->size;i++){
        if(abs->personArray[i].name==name){
            return i;
        }
    }
    return -1;

}

void deletePerson(AddressBook *abs){
    cout << " 请输入删除联系人姓名：" << endl;
    string name;
    cin >> name;
    int index = personIsExist(abs, name);
    if (index == -1) {
        cout << "查无此人" << endl;
    } else {
        for(int i=i;i<abs->size;i++){
            abs->personArray[i] = abs->personArray[i+1];
        }
        abs->size-=1;
        cout << "删除成功" << endl;
    }
    system("clear");
}

void findPerson(AddressBook *abs){
    string name;
    cout<<"请输入要查找的人姓名："<<endl;
    cin>>name;
    int index = personIsExist(abs, name);
    if(index!=-1){
        printPerson(abs->personArray[index]);
    }else{
        cout<<"查无此人！"<<endl;
    }
    system("clear");
}

void modifyPerson(AddressBook *abs){
    string name;
    cout<<"请输入需要修改人姓名："<<endl;
    cin>>name;
    int index = personIsExist(abs, name);
    if(index!=-1){
        string name;
        cout<<"请输入姓名："<<endl;
        cin>>name;
        abs->personArray[index].name=name;
        cout<<"请输入性别：1 男  0  女"<<endl;
        int sex = 0;
        while(true) {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                abs->personArray[index].sex = sex;
                break;
            }
            cout<<"重新输入性别"<<endl;
        }
        cout<<"请输入年龄："<<endl;
        int age;
        cin>>age;
        abs->personArray[index].age=age;
        cout<<"请输入联系电话："<<endl;
        string phone;
        cin>>phone;
        abs->personArray[index].phone=phone;
        cout<<"请输入地址："<<endl;
        string address;
        cin>>address;
        abs->personArray[index].address=address;

    }else{
        cout<<"查无此人"<<endl;
    }
    system("clear");
}

void cleanPerson(AddressBook *abs){
    abs->size=0;
    cout<<"通讯录已清空"<<endl;
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
                deletePerson(&abs);
                break;
            case 4:   //4、查找联系人
                findPerson(&abs);
                break;
            case 5:   //5、修改联系人
                modifyPerson(&abs);
                break;
            case 6:   //6、清空联系人
                cleanPerson(&abs);
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