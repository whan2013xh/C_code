//
// Created by xuhan on 2023/10/16.
//
#include <iostream>

using namespace std;

struct Hero{
    string name;
    int age;
    string sex;
};

void bubbleSort(struct Hero heroArray[], int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(heroArray[j].age>heroArray[j+1].age){
                Hero tmp = heroArray[j];
                heroArray[j] = heroArray[j+1];
                heroArray[j+1] = tmp;
            }
        }
    }
}

int main33(){
    //1、设计英雄结构体
    struct Hero heroArray[5] = {
            {"刘备",23,"男"},
            {"关羽",22,"男"},
            {"张飞", 20, "男"},
            {"赵云", 21, "男"},
            {"貂蝉", 19, "女"}
    };
    //2、创建数组存放5名英雄
    int length = sizeof(heroArray)/ sizeof(heroArray[0]);
    for (Hero hero: heroArray) {
        cout<<"hero is : "<<hero.name<<" "<<hero.age<<" "<<hero.sex<<endl;
    }
    //3、对数组进行排序
    bubbleSort(heroArray, length);
    for (Hero hero: heroArray) {
        cout<<"sort hero is : "<<hero.name<<" "<<hero.age<<" "<<hero.sex<<endl;
    }
}