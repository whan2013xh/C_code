//
// Created by mayn on 2023/11/6.
//
#include <iostream>
#include <windows.h>
using namespace std;

class Point{
private:
    int x;
    int y;

public:
    void setX(int x1){
        x=x1;
    }

    void setY(int y1){
        y=y1;
    }

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }
};

class Circle{
private:
    int r;
    Point center;

public:
    void setR(int r1){
        r=r1;
    }

    void setCenter(Point center1){
        center=center;
    }

    int getR(){
        return r;
    }

    Point getCenter(){
        return center;
    }
};

void isInside(Circle c, Point p){
    int dis = (c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX())+(c.getCenter().getY()-p.getY())*(c.getCenter().getY()-p.getY());
    int r = c.getR()*c.getR();
    cout<<"dis: "<<dis<<" r : "<<r<<endl;
    if(dis>r){
        cout<<"点在圆外"<<endl;
    }else if(dis==r){
        cout<<"点在圆上"<<endl;
    }else{
        cout<<"点在圆内"<<endl;
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    Point p1=Point();
    p1.setX(10);
    p1.setY(12);
    Point p2 = Point();
    p2.setX(10);
    p2.setY(0);
    Circle c = Circle();
    c.setR(10);
    c.setCenter(p2);
    isInside(c, p1);

    return 0;
}